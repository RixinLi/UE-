// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRSTTEST_LOLCharacter_generated_h
#error "LOLCharacter.generated.h already included, missing '#pragma once' in LOLCharacter.h"
#endif
#define FIRSTTEST_LOLCharacter_generated_h

#define FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_SPARSE_DATA
#define FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_RPC_WRAPPERS
#define FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALOLCharacter(); \
	friend struct Z_Construct_UClass_ALOLCharacter_Statics; \
public: \
	DECLARE_CLASS(ALOLCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstTest"), NO_API) \
	DECLARE_SERIALIZER(ALOLCharacter)


#define FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesALOLCharacter(); \
	friend struct Z_Construct_UClass_ALOLCharacter_Statics; \
public: \
	DECLARE_CLASS(ALOLCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstTest"), NO_API) \
	DECLARE_SERIALIZER(ALOLCharacter)


#define FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALOLCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALOLCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALOLCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALOLCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALOLCharacter(ALOLCharacter&&); \
	NO_API ALOLCharacter(const ALOLCharacter&); \
public:


#define FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALOLCharacter(ALOLCharacter&&); \
	NO_API ALOLCharacter(const ALOLCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALOLCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALOLCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALOLCharacter)


#define FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(ALOLCharacter, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(ALOLCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ALOLCharacter, CameraComp); }


#define FirstTest_Source_FirstTest_Public_LOLCharacter_h_14_PROLOG
#define FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_SPARSE_DATA \
	FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_RPC_WRAPPERS \
	FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_INCLASS \
	FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_SPARSE_DATA \
	FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FirstTest_Source_FirstTest_Public_LOLCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTTEST_API UClass* StaticClass<class ALOLCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FirstTest_Source_FirstTest_Public_LOLCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
