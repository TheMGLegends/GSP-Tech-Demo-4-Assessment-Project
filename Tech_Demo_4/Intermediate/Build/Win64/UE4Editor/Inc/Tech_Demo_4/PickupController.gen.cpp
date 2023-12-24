// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tech_Demo_4/PickupController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupController() {}
// Cross Module References
	TECH_DEMO_4_API UEnum* Z_Construct_UEnum_Tech_Demo_4_EPickups();
	UPackage* Z_Construct_UPackage__Script_Tech_Demo_4();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_APickupController_NoRegister();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_APickupController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_APickupLocationController_NoRegister();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_ATech_Demo_4GameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	static UEnum* EPickups_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Tech_Demo_4_EPickups, Z_Construct_UPackage__Script_Tech_Demo_4(), TEXT("EPickups"));
		}
		return Singleton;
	}
	template<> TECH_DEMO_4_API UEnum* StaticEnum<EPickups>()
	{
		return EPickups_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPickups(EPickups_StaticEnum, TEXT("/Script/Tech_Demo_4"), TEXT("EPickups"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Tech_Demo_4_EPickups_Hash() { return 1792798591U; }
	UEnum* Z_Construct_UEnum_Tech_Demo_4_EPickups()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Tech_Demo_4();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPickups"), 0, Get_Z_Construct_UEnum_Tech_Demo_4_EPickups_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "DoubleDamage", (int64)DoubleDamage },
				{ "Recovery", (int64)Recovery },
				{ "Ammo", (int64)Ammo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Ammo.Name", "Ammo" },
				{ "DoubleDamage.Name", "DoubleDamage" },
				{ "ModuleRelativePath", "PickupController.h" },
				{ "Recovery.Name", "Recovery" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Tech_Demo_4,
				nullptr,
				"EPickups",
				"EPickups",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(APickupController::execOnBeginOverlapComponentEvent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlapComponentEvent(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void APickupController::StaticRegisterNativesAPickupController()
	{
		UClass* Class = APickupController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlapComponentEvent", &APickupController::execOnBeginOverlapComponentEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics
	{
		struct PickupController_eventOnBeginOverlapComponentEvent_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickupController_eventOnBeginOverlapComponentEvent_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickupController_eventOnBeginOverlapComponentEvent_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickupController_eventOnBeginOverlapComponentEvent_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickupController_eventOnBeginOverlapComponentEvent_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((PickupController_eventOnBeginOverlapComponentEvent_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PickupController_eventOnBeginOverlapComponentEvent_Parms), &Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PickupController_eventOnBeginOverlapComponentEvent_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_OverlappedComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PickupController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APickupController, nullptr, "OnBeginOverlapComponentEvent", nullptr, nullptr, sizeof(PickupController_eventOnBeginOverlapComponentEvent_Parms), Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickupController_NoRegister()
	{
		return APickupController::StaticClass();
	}
	struct Z_Construct_UClass_APickupController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupLocationController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupLocationController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameModeBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameModeBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PickupType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupSFX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tech_Demo_4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APickupController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APickupController_OnBeginOverlapComponentEvent, "OnBeginOverlapComponentEvent" }, // 1208859720
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PickupController.h" },
		{ "ModuleRelativePath", "PickupController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupController_Statics::NewProp_PickupLocationController_MetaData[] = {
		{ "Category", "Pickup Location" },
		{ "ModuleRelativePath", "PickupController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupController_Statics::NewProp_PickupLocationController = { "PickupLocationController", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupController, PickupLocationController), Z_Construct_UClass_APickupLocationController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupController_Statics::NewProp_PickupLocationController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupController_Statics::NewProp_PickupLocationController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupController_Statics::NewProp_GameModeBase_MetaData[] = {
		{ "Category", "Game Mode" },
		{ "ModuleRelativePath", "PickupController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupController_Statics::NewProp_GameModeBase = { "GameModeBase", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupController, GameModeBase), Z_Construct_UClass_ATech_Demo_4GameModeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupController_Statics::NewProp_GameModeBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupController_Statics::NewProp_GameModeBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupController_Statics::NewProp_PickupType_MetaData[] = {
		{ "Category", "Pickup Type" },
		{ "ModuleRelativePath", "PickupController.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APickupController_Statics::NewProp_PickupType = { "PickupType", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupController, PickupType), Z_Construct_UEnum_Tech_Demo_4_EPickups, METADATA_PARAMS(Z_Construct_UClass_APickupController_Statics::NewProp_PickupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupController_Statics::NewProp_PickupType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupController_Statics::NewProp_BoxCollider_MetaData[] = {
		{ "Category", "Collider Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PickupController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupController_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupController, BoxCollider), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupController_Statics::NewProp_BoxCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupController_Statics::NewProp_BoxCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupController_Statics::NewProp_PickupSFX_MetaData[] = {
		{ "Category", "SFX" },
		{ "ModuleRelativePath", "PickupController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupController_Statics::NewProp_PickupSFX = { "PickupSFX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupController, PickupSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupController_Statics::NewProp_PickupSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupController_Statics::NewProp_PickupSFX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupController_Statics::NewProp_PickupLocationController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupController_Statics::NewProp_GameModeBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupController_Statics::NewProp_PickupType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupController_Statics::NewProp_BoxCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupController_Statics::NewProp_PickupSFX,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickupController_Statics::ClassParams = {
		&APickupController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APickupController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APickupController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickupController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickupController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickupController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APickupController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickupController, 3590014855);
	template<> TECH_DEMO_4_API UClass* StaticClass<APickupController>()
	{
		return APickupController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickupController(Z_Construct_UClass_APickupController, &APickupController::StaticClass, TEXT("/Script/Tech_Demo_4"), TEXT("APickupController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickupController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
