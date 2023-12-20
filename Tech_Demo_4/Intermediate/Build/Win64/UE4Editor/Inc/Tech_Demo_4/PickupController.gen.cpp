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
	TECH_DEMO_4_API UClass* Z_Construct_UClass_APickupLocationController_NoRegister();
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
	void APickupController::StaticRegisterNativesAPickupController()
	{
	}
	UClass* Z_Construct_UClass_APickupController_NoRegister()
	{
		return APickupController::StaticClass();
	}
	struct Z_Construct_UClass_APickupController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupLocationController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupLocationController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PickupType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickupController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tech_Demo_4,
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickupController_Statics::NewProp_PickupLocationController = { "PickupLocationController", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupController, PickupLocationController), Z_Construct_UClass_APickupLocationController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickupController_Statics::NewProp_PickupLocationController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupController_Statics::NewProp_PickupLocationController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickupController_Statics::NewProp_PickupType_MetaData[] = {
		{ "Category", "Pickup Type" },
		{ "ModuleRelativePath", "PickupController.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APickupController_Statics::NewProp_PickupType = { "PickupType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickupController, PickupType), Z_Construct_UEnum_Tech_Demo_4_EPickups, METADATA_PARAMS(Z_Construct_UClass_APickupController_Statics::NewProp_PickupType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickupController_Statics::NewProp_PickupType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickupController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupController_Statics::NewProp_PickupLocationController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickupController_Statics::NewProp_PickupType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickupController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickupController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APickupController_Statics::ClassParams = {
		&APickupController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APickupController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(APickupController, 3431045122);
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
