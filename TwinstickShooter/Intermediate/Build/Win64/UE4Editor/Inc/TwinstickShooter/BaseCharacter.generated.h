// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TWINSTICKSHOOTER_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define TWINSTICKSHOOTER_BaseCharacter_generated_h

#define TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_SPARSE_DATA
#define TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalculateHealth);


#define TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateHealth);


#define TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TwinstickShooter"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TwinstickShooter"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_9_PROLOG
#define TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_SPARSE_DATA \
	TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_RPC_WRAPPERS \
	TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_INCLASS \
	TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_SPARSE_DATA \
	TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TWINSTICKSHOOTER_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TwinstickShooter_Source_TwinstickShooter_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
