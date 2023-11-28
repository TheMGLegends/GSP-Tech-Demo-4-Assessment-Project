// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tech_Demo_4/Tech_Demo_4GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTech_Demo_4GameModeBase() {}
// Cross Module References
	TECH_DEMO_4_API UClass* Z_Construct_UClass_ATech_Demo_4GameModeBase_NoRegister();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_ATech_Demo_4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tech_Demo_4();
// End Cross Module References
	void ATech_Demo_4GameModeBase::StaticRegisterNativesATech_Demo_4GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATech_Demo_4GameModeBase_NoRegister()
	{
		return ATech_Demo_4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tech_Demo_4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Tech_Demo_4GameModeBase.h" },
		{ "ModuleRelativePath", "Tech_Demo_4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATech_Demo_4GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::ClassParams = {
		&ATech_Demo_4GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATech_Demo_4GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATech_Demo_4GameModeBase, 2974377025);
	template<> TECH_DEMO_4_API UClass* StaticClass<ATech_Demo_4GameModeBase>()
	{
		return ATech_Demo_4GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATech_Demo_4GameModeBase(Z_Construct_UClass_ATech_Demo_4GameModeBase, &ATech_Demo_4GameModeBase::StaticClass, TEXT("/Script/Tech_Demo_4"), TEXT("ATech_Demo_4GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATech_Demo_4GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
