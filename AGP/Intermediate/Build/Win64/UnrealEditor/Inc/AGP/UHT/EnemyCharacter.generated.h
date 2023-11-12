// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/EnemyCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef AGP_EnemyCharacter_generated_h
#error "EnemyCharacter.generated.h already included, missing '#pragma once' in EnemyCharacter.h"
#endif
#define AGP_EnemyCharacter_generated_h

#define FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_SPARSE_DATA
#define FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_RPC_WRAPPERS \
	virtual void MulticastCheckVisibility_Implementation(); \
	virtual void ServerCheckVisibility_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticastCheckVisibility); \
	DECLARE_FUNCTION(execServerCheckVisibility); \
	DECLARE_FUNCTION(execOnSensedPawn);


#define FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastCheckVisibility_Implementation(); \
	virtual void ServerCheckVisibility_Implementation(); \
 \
	DECLARE_FUNCTION(execMulticastCheckVisibility); \
	DECLARE_FUNCTION(execServerCheckVisibility); \
	DECLARE_FUNCTION(execOnSensedPawn);


#define FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_ACCESSORS
#define FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_CALLBACK_WRAPPERS
#define FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemyCharacter*>(this); }


#define FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyCharacter(); \
	friend struct Z_Construct_UClass_AEnemyCharacter_Statics; \
public: \
	DECLARE_CLASS(AEnemyCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AGP"), NO_API) \
	DECLARE_SERIALIZER(AEnemyCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AEnemyCharacter*>(this); }


#define FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public: \
	NO_API virtual ~AEnemyCharacter();


#define FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyCharacter(AEnemyCharacter&&); \
	NO_API AEnemyCharacter(const AEnemyCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyCharacter) \
	NO_API virtual ~AEnemyCharacter();


#define FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_36_PROLOG
#define FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_SPARSE_DATA \
	FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_RPC_WRAPPERS \
	FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_ACCESSORS \
	FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_CALLBACK_WRAPPERS \
	FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_INCLASS \
	FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_SPARSE_DATA \
	FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_ACCESSORS \
	FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_CALLBACK_WRAPPERS \
	FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_INCLASS_NO_PURE_DECLS \
	FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h_39_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AGP_API UClass* StaticClass<class AEnemyCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Characters_EnemyCharacter_h


#define FOREACH_ENUM_EENEMYSTATE(op) \
	op(EEnemyState::Patrol) \
	op(EEnemyState::Engage) \
	op(EEnemyState::Evade) \
	op(EEnemyState::Investigate) \
	op(EEnemyState::Guard) 

enum class EEnemyState : uint8;
template<> struct TIsUEnumClass<EEnemyState> { enum { Value = true }; };
template<> AGP_API UEnum* StaticEnum<EEnemyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
