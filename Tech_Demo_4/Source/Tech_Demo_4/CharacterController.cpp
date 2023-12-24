// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterController.h"
#include "CharacterWidget.h"
#include "GrenadeController.h"
#include "WeaponController.h"
#include "Components/SlateWrapperTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACharacterController::ACharacterController()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	bUseControllerRotationYaw = false;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetRelativeLocation(FVector(0, 20, 0));

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	SpringArm->TargetArmLength = 150.0f;
	SpringArm->SetRelativeLocation(FVector(0, 25, 75));
	SpringArm->SetRelativeRotation((FRotator(0.0f, 0.0f, 0.0f)));

	Camera->AttachToComponent(SpringArm, FAttachmentTransformRules::KeepRelativeTransform, USpringArmComponent::SocketName);
	
	CharMove = GetCharacterMovement();
	bIsAimedIn = false;
	bIsDead = false;
	bHasShot = false;
	bIsShooting = false;
	bCanGetDamaged = true;
	
	bDoubleDamageActive = false;
	DoubleDamageDuration = 10.0f;
	DoubleDamageVisible = ESlateVisibility::Hidden;
	
	ShotDuration = 0.6f;
	CurrentShotInterval = 0.0f;

	ReloadDuration = 3.3f;
	CurrentReloadInterval = 0.0f;
	DDTimeRemaining = 0.0f;
	DamageMultiplier = 1;
	
	MaxHealth = 200.0f;
	Health = MaxHealth;
	HealthPercentage = Health / MaxHealth;

	ClipSize = 10;
	Ammo = ClipSize;
	MaxClips = 2;
	Clips = MaxClips;

	RemainingAmmo = 1.0f;
	
	Score = 0;

	CrosshairVisible = ESlateVisibility::Hidden;
	ReloadVisible = ESlateVisibility::Hidden;

	GrenadesRemaining = 3;
}

// Called when the game starts or when spawned
void ACharacterController::BeginPlay()
{
	Super::BeginPlay();

	Origin = GetActorTransform();

	// INFO: Spawns a weapon and attaches it to the corresponding player
	if (USkeletalMeshComponent* MeshComponent = FindComponentByClass<USkeletalMeshComponent>())
    {
		SkeletalMesh = MeshComponent;
		
		if (WeaponAsset)
		{
			FActorSpawnParameters SpawnParameters;
			SpawnParameters.Owner = this;
			SpawnParameters.Instigator = this;

			AWeaponController* Weapon = GetWorld()->SpawnActor<AWeaponController>(WeaponAsset, FVector(0,0,0), FRotator(0), SpawnParameters);

			if (Weapon)
			{
				Weapon->SetActorTransform(MeshComponent->GetSocketTransform(TEXT("WeaponSocket")));
				Weapon->AttachToComponent(MeshComponent, FAttachmentTransformRules::SnapToTargetIncludingScale, TEXT("WeaponSocket"));
				Cast<AWeaponController>(Weapon)->Player = this;
			}
		}

		// INFO: Gets a reference to the animation controller for later use
    	if (UAnimInstance* AnimInstance = MeshComponent->GetAnimInstance())
    	{
    		AnimationController = Cast<UCharacterAnimationController>(AnimInstance);
    	}
    }
}

// Called every frame
void ACharacterController::Tick(const float DeltaTime)
{
	Super::Tick(DeltaTime);

	// INFO: Resets reloading timer
	if ((bIsAimedIn || bIsDead) && bIsReloading)
	{
		CurrentReloadInterval = 0.0f;
		bIsReloading = false;
	}

	// INFO: Delay between shots taken
	if (bIsShooting || bHasShot)
	{
		CurrentShotInterval += DeltaTime;

		if (CurrentShotInterval > ShotDuration)
		{
			CurrentShotInterval = 0.0f;
			bHasShot = false;
			
			if (bIsShooting)
			{
				Shoot();
			}
		}
	}

	// INFO: Duration that the double damage is active for, resets after timer runs out
	if (bDoubleDamageActive)
	{
		DDTimeRemaining = DoubleDamageDuration - (CurrentDoubleDamageInterval - 1);
		CurrentDoubleDamageInterval += DeltaTime;

		if (CurrentDoubleDamageInterval > DoubleDamageDuration)
		{
			CurrentDoubleDamageInterval = 0.0f;
			bDoubleDamageActive = false;
			DoubleDamageVisible = ESlateVisibility::Hidden;

			DamageMultiplier = 1;
		}
	}

	// INFO: Reloading duration
	if (bIsReloading)
	{
		CurrentReloadInterval += DeltaTime;

		if (CurrentReloadInterval > ReloadDuration)
		{
			CurrentReloadInterval = 0.0f;
			
			Ammo = ClipSize;
			RemainingAmmo = 1.0f;
			Clips--;
			
			bIsReloading = false;
		}
	}

	if (AnimationController->Montage_IsPlaying(ReloadMontage) && ReloadVisible == ESlateVisibility::Hidden)
	{
		ReloadVisible = ESlateVisibility::Visible;
	}
	else if (!AnimationController->Montage_IsPlaying(ReloadMontage) && ReloadVisible != ESlateVisibility::Hidden)
	{
		ReloadVisible = ESlateVisibility::Hidden;
	}
}

// Called to bind functionality to input
void ACharacterController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Axis Bindings:
	PlayerInputComponent->BindAxis("MoveForward", this, &ACharacterController::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACharacterController::MoveRight);

	PlayerInputComponent->BindAxis("LookUp", this, &ACharacterController::LookUp);
	PlayerInputComponent->BindAxis("LookRight", this, &ACharacterController::LookRight);

	// Action Bindings:
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacterController::Jump);
	
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ACharacterController::Shoot);
	PlayerInputComponent->BindAction("Shoot", IE_Released, this, &ACharacterController::StopShoot);
	
	PlayerInputComponent->BindAction("Aim", IE_Pressed, this, &ACharacterController::Aim);
	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &ACharacterController::Reload);
	PlayerInputComponent->BindAction("ThrowGrenade", IE_Pressed, this, &ACharacterController::ThrowGrenade);
}

void ACharacterController::GetDamaged(const int Damage)
{
	if (Health > 0 && bCanGetDamaged)
	{
		// INFO: Plays blood splatter animation
		if (CharacterWidget != nullptr)
		{
			CharacterWidget->Fade();
		}
		Health -= Damage;
		HealthPercentage = Health / MaxHealth;

		// INFO: If the character dies
		if (Health <= 0)
		{
			bIsDead = true;
			UGameplayStatics::PlaySoundAtLocation(this, DeathSFX, GetActorLocation(), 1.5f);
			AimOut();

			if (AnimationController != nullptr)
			{
				AnimationController->bIsDead = true;
			}

			StopAnimMontage();
		}
	}
}

void ACharacterController::Heal(const int HealAmount)
{
	Health += HealAmount;

	if (Health > MaxHealth)
	{
		Health = MaxHealth;
	}

	HealthPercentage = Health / MaxHealth;
}

void ACharacterController::IncrementAmmo(int IncrementAmount)
{
	// INFO: Reloads any ammo that is missing first
	if (Ammo < ClipSize)
	{
		const int Remainder = ClipSize - Ammo;

		if (IncrementAmount >= Remainder)
		{
			IncrementAmount -= Remainder;
			Ammo += Remainder;

			RemainingAmmo = (Ammo * 1.0) / (ClipSize * 1.0);
		}
	}

	// INFO: Reloads any clips that are missing using the IncrementAmount remaining after reloading ammo counter
	if (Clips < MaxClips)
	{
		Clips += (IncrementAmount / ClipSize);

		if (Clips > MaxClips)
		{
			Clips = MaxClips;
		}
	}
}

void ACharacterController::Respawn()
{
	// INFO: Resets all values back to their default starting values in-preparation for the new round
	bIsDead = false;
	bCanGetDamaged = true;
	AnimationController->bIsDead = false;
	
	SetActorTransform(Origin);
	AimOut();
	Camera->SetRelativeLocation(FVector(0, 20, 0));
	
	SpringArm->SetRelativeLocation(FVector(0, 25, 90));
	SpringArm->SetRelativeRotation((FRotator(0.0f, 0.0f, 0.0f)));

	bHasShot = false;
	bIsShooting = false;
	
	Health = MaxHealth;
	HealthPercentage = Health / MaxHealth;

	Ammo = ClipSize;
	Clips = MaxClips;
	RemainingAmmo = 1.0f;

	GrenadesRemaining = 3;
}

void ACharacterController::ActivateDoubleDamage()
{
	CurrentDoubleDamageInterval = 0.0f;
	bDoubleDamageActive = true;
	DoubleDamageVisible = ESlateVisibility::Visible;
	DamageMultiplier = 2;
}

bool ACharacterController::GetIsAimedIn() const
{
	return bIsAimedIn;
}

void ACharacterController::MoveForward(const float Value)
{
	if (Value && !bIsDead)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ACharacterController::MoveRight(const float Value)
{
	if (Value && !bIsDead)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

// ReSharper disable once CppMemberFunctionMayBeConst
void ACharacterController::LookUp(const float Value)
{
	if (Value && !bIsDead)
	{
		const float Temp = SpringArm->GetRelativeRotation().Pitch + Value;
		
		if (Temp < 25 && Temp > -50)
		{
			SpringArm->AddLocalRotation(FRotator(Value, 0, 0));
		}
	}
}

void ACharacterController::LookRight(const float Value)
{
	if (Value && !bIsDead)
	{
		AddActorLocalRotation(FRotator(0, Value, 0));
	}
}

void ACharacterController::Jump()
{
	if (!bIsDead)
	{
		Super::Jump();
	}
}

void ACharacterController::Shoot()
{
	if (bIsAimedIn && !bHasShot && !bIsDead && Ammo > 0)
	{
		FHitResult Hit;

		FVector Start = Camera->GetComponentLocation();
		FVector ForwardVector = Camera->GetForwardVector();

		Start += (ForwardVector * SpringArm->TargetArmLength);

		FVector End = Start + (ForwardVector * 5000.0f);

		FCollisionQueryParams CollisionParams;
		CollisionParams.bTraceComplex = false;
		CollisionParams.AddIgnoredActor(this->GetOwner());

		bool bHitObject = GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECollisionChannel::ECC_Visibility, CollisionParams);

		// INFO: Damage System used to define different damage values based on where the line-trace lands on the hit actor
		if (bHitObject && Cast<ACharacterController>(Hit.Actor) != nullptr)
		{
			float BaseDamage = 0;

			if (Hit.BoneName == "Head")
			{
				BaseDamage = 50;
			}
			else
			{
				BaseDamage = 10;
			}

			float Damage = BaseDamage * DamageMultiplier;
			
			Cast<ACharacterController>(Hit.Actor)->GetDamaged(Damage);
		}

		UGameplayStatics::PlaySoundAtLocation(this, ShotSFX, GetActorLocation(), 0.25f);
		Ammo--;
		RemainingAmmo = (Ammo * 1.0) / (ClipSize * 1.0);
		bIsShooting = true;
		bHasShot = true;
		PlayAnimMontage(ShootMontage);
	}
}

void ACharacterController::StopShoot()
{
	bIsShooting = false;
}

void ACharacterController::Reload()
{
	if (!bIsDead && Clips > 0 && Ammo < ClipSize)
	{
		AimOut();
		CurrentShotInterval = 0;
		bIsReloading = true;
		PlayAnimMontage(ReloadMontage);
	}
}

void ACharacterController::ThrowGrenade()
{
	if (GrenadesRemaining > 0)
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.Owner = this;
		SpawnParameters.Instigator = this;

		// INFO: Instantiates a grenade and launches it in the direction the player is facing at a given velocity
		const AGrenadeController* Grenade = GetWorld()->SpawnActor<AGrenadeController>(GrenadeAsset, GetActorLocation(), Camera->GetComponentRotation(), SpawnParameters);
		const FVector ThrowStrength = Camera->GetForwardVector() * 1000;

		if (UStaticMeshComponent* MeshComponent = Grenade->FindComponentByClass<UStaticMeshComponent>())
		{
			MeshComponent->SetPhysicsLinearVelocity(ThrowStrength);
		}
		GrenadesRemaining--;
	}
}

void ACharacterController::Aim()
{
	if (!bIsAimedIn && !bIsDead)
	{
		AimIn();
	}
	else if (bIsAimedIn && !bIsDead)
	{
		AimOut();
	}
}

void ACharacterController::AimIn()
{
	bIsAimedIn = true;
	SkeletalMesh->SetRelativeRotation(FRotator(SkeletalMesh->GetComponentRotation().Pitch, -70.0f, SkeletalMesh->GetComponentRotation().Roll));

	if (CharMove != nullptr)
	{
		CharMove->MaxWalkSpeed = 300.0f;
	}
	SpringArm->TargetArmLength = 75.0f;

	if (AnimationController != nullptr)
	{
		AnimationController->bIsAiming = bIsAimedIn;
	}

	CrosshairVisible = ESlateVisibility::Visible;

	PlayAnimMontage(AimMontage);
}

void ACharacterController::AimOut()
{
	bIsAimedIn = false;
	SkeletalMesh->SetRelativeRotation(FRotator(SkeletalMesh->GetComponentRotation().Pitch, -90.0f, SkeletalMesh->GetComponentRotation().Roll));

	if (CharMove != nullptr)
	{
		CharMove->MaxWalkSpeed = 600.0f;
	}
	SpringArm->TargetArmLength = 150.0f;

	if (AnimationController != nullptr)
	{
		AnimationController->bIsAiming = bIsAimedIn;
	}

	CrosshairVisible = ESlateVisibility::Hidden;

	StopAnimMontage();
}

