// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tech_Demo_4/GrenadeController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrenadeController() {}
// Cross Module References
	TECH_DEMO_4_API UClass* Z_Construct_UClass_AGrenadeController_NoRegister();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_AGrenadeController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tech_Demo_4();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_AExplosionController_NoRegister();
// End Cross Module References
	void AGrenadeController::StaticRegisterNativesAGrenadeController()
	{
	}
	UClass* Z_Construct_UClass_AGrenadeController_NoRegister()
	{
		return AGrenadeController::StaticClass();
	}
	struct Z_Construct_UClass_AGrenadeController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeUntilDetonation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeUntilDetonation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionSFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExplosionAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrenadeController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tech_Demo_4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenadeController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GrenadeController.h" },
		{ "ModuleRelativePath", "GrenadeController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenadeController_Statics::NewProp_TimeUntilDetonation_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "GrenadeController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrenadeController_Statics::NewProp_TimeUntilDetonation = { "TimeUntilDetonation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrenadeController, TimeUntilDetonation), METADATA_PARAMS(Z_Construct_UClass_AGrenadeController_Statics::NewProp_TimeUntilDetonation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrenadeController_Statics::NewProp_TimeUntilDetonation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenadeController_Statics::NewProp_ExplosionSFX_MetaData[] = {
		{ "Category", "SFX" },
		{ "ModuleRelativePath", "GrenadeController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGrenadeController_Statics::NewProp_ExplosionSFX = { "ExplosionSFX", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrenadeController, ExplosionSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGrenadeController_Statics::NewProp_ExplosionSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrenadeController_Statics::NewProp_ExplosionSFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrenadeController_Statics::NewProp_ExplosionAsset_MetaData[] = {
		{ "Category", "Grenade" },
		{ "ModuleRelativePath", "GrenadeController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGrenadeController_Statics::NewProp_ExplosionAsset = { "ExplosionAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrenadeController, ExplosionAsset), Z_Construct_UClass_AExplosionController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGrenadeController_Statics::NewProp_ExplosionAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGrenadeController_Statics::NewProp_ExplosionAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrenadeController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrenadeController_Statics::NewProp_TimeUntilDetonation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrenadeController_Statics::NewProp_ExplosionSFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrenadeController_Statics::NewProp_ExplosionAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrenadeController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrenadeController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrenadeController_Statics::ClassParams = {
		&AGrenadeController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGrenadeController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGrenadeController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGrenadeController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGrenadeController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrenadeController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrenadeController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrenadeController, 1016703840);
	template<> TECH_DEMO_4_API UClass* StaticClass<AGrenadeController>()
	{
		return AGrenadeController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrenadeController(Z_Construct_UClass_AGrenadeController, &AGrenadeController::StaticClass, TEXT("/Script/Tech_Demo_4"), TEXT("AGrenadeController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrenadeController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
