// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TECH_DEMO_4_Tech_Demo_4GameModeBase_generated_h
#error "Tech_Demo_4GameModeBase.generated.h already included, missing '#pragma once' in Tech_Demo_4GameModeBase.h"
#endif
#define TECH_DEMO_4_Tech_Demo_4GameModeBase_generated_h

#define Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_SPARSE_DATA
#define Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetSeconds); \
	DECLARE_FUNCTION(execGetMinutes);


#define Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSeconds); \
	DECLARE_FUNCTION(execGetMinutes);


#define Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATech_Demo_4GameModeBase(); \
	friend struct Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATech_Demo_4GameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tech_Demo_4"), NO_API) \
	DECLARE_SERIALIZER(ATech_Demo_4GameModeBase)


#define Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_INCLASS \
private: \
	static void StaticRegisterNativesATech_Demo_4GameModeBase(); \
	friend struct Z_Construct_UClass_ATech_Demo_4GameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATech_Demo_4GameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tech_Demo_4"), NO_API) \
	DECLARE_SERIALIZER(ATech_Demo_4GameModeBase)


#define Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATech_Demo_4GameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATech_Demo_4GameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATech_Demo_4GameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATech_Demo_4GameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATech_Demo_4GameModeBase(ATech_Demo_4GameModeBase&&); \
	NO_API ATech_Demo_4GameModeBase(const ATech_Demo_4GameModeBase&); \
public:


#define Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATech_Demo_4GameModeBase(ATech_Demo_4GameModeBase&&); \
	NO_API ATech_Demo_4GameModeBase(const ATech_Demo_4GameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATech_Demo_4GameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATech_Demo_4GameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATech_Demo_4GameModeBase)


#define Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Players() { return STRUCT_OFFSET(ATech_Demo_4GameModeBase, Players); } \
	FORCEINLINE static uint32 __PPO__PickupLocations() { return STRUCT_OFFSET(ATech_Demo_4GameModeBase, PickupLocations); } \
	FORCEINLINE static uint32 __PPO__Audio() { return STRUCT_OFFSET(ATech_Demo_4GameModeBase, Audio); }


#define Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_16_PROLOG
#define Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_PRIVATE_PROPERTY_OFFSET \
	Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_SPARSE_DATA \
	Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_RPC_WRAPPERS \
	Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_INCLASS \
	Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_PRIVATE_PROPERTY_OFFSET \
	Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_SPARSE_DATA \
	Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_INCLASS_NO_PURE_DECLS \
	Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TECH_DEMO_4_API UClass* StaticClass<class ATech_Demo_4GameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Tech_Demo_4_Source_Tech_Demo_4_Tech_Demo_4GameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
