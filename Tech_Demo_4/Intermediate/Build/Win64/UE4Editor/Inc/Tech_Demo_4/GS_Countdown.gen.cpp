// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tech_Demo_4/GS_Countdown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGS_Countdown() {}
// Cross Module References
	TECH_DEMO_4_API UClass* Z_Construct_UClass_AGS_Countdown_NoRegister();
	TECH_DEMO_4_API UClass* Z_Construct_UClass_AGS_Countdown();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
	UPackage* Z_Construct_UPackage__Script_Tech_Demo_4();
// End Cross Module References
	void AGS_Countdown::StaticRegisterNativesAGS_Countdown()
	{
	}
	UClass* Z_Construct_UClass_AGS_Countdown_NoRegister()
	{
		return AGS_Countdown::StaticClass();
	}
	struct Z_Construct_UClass_AGS_Countdown_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGS_Countdown_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tech_Demo_4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGS_Countdown_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GS_Countdown.h" },
		{ "ModuleRelativePath", "GS_Countdown.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGS_Countdown_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGS_Countdown>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGS_Countdown_Statics::ClassParams = {
		&AGS_Countdown::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGS_Countdown_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGS_Countdown_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGS_Countdown()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGS_Countdown_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGS_Countdown, 1601504090);
	template<> TECH_DEMO_4_API UClass* StaticClass<AGS_Countdown>()
	{
		return AGS_Countdown::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGS_Countdown(Z_Construct_UClass_AGS_Countdown, &AGS_Countdown::StaticClass, TEXT("/Script/Tech_Demo_4"), TEXT("AGS_Countdown"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGS_Countdown);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
