// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tech_Demo_4/ExplosionController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExplosionController() {}
// Cross Module References
	TECH_DEMO_4_API UClass* Z_Construct_UClass_AExplosionController_NoRegister();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_AExplosionController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tech_Demo_4();
// End Cross Module References
	void AExplosionController::StaticRegisterNativesAExplosionController()
	{
	}
	UClass* Z_Construct_UClass_AExplosionController_NoRegister()
	{
		return AExplosionController::StaticClass();
	}
	struct Z_Construct_UClass_AExplosionController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExplosionController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tech_Demo_4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExplosionController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExplosionController.h" },
		{ "ModuleRelativePath", "ExplosionController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExplosionController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExplosionController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExplosionController_Statics::ClassParams = {
		&AExplosionController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AExplosionController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExplosionController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExplosionController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExplosionController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExplosionController, 360547034);
	template<> TECH_DEMO_4_API UClass* StaticClass<AExplosionController>()
	{
		return AExplosionController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExplosionController(Z_Construct_UClass_AExplosionController, &AExplosionController::StaticClass, TEXT("/Script/Tech_Demo_4"), TEXT("AExplosionController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExplosionController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
