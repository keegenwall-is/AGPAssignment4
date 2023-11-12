// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Characters/BaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_ABaseCharacter();
	AGP_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
	AGP_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	DEFINE_FUNCTION(ABaseCharacter::execMulticastFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastFire_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execMulticastEquipWeapon)
	{
		P_GET_UBOOL(Z_Param_bEquipWeapon);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MulticastEquipWeapon_Implementation(Z_Param_bEquipWeapon);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABaseCharacter::execHasWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasWeapon();
		P_NATIVE_END;
	}
	struct BaseCharacter_eventEquipWeaponGraphical_Parms
	{
		bool bEquipWeapon;
	};
	struct BaseCharacter_eventFiringGraphical_Parms
	{
		bool bReturnIsFiring;
	};
	struct BaseCharacter_eventMulticastEquipWeapon_Parms
	{
		bool bEquipWeapon;
	};
	static FName NAME_ABaseCharacter_EquipWeaponGraphical = FName(TEXT("EquipWeaponGraphical"));
	void ABaseCharacter::EquipWeaponGraphical(bool bEquipWeapon)
	{
		BaseCharacter_eventEquipWeaponGraphical_Parms Parms;
		Parms.bEquipWeapon=bEquipWeapon ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABaseCharacter_EquipWeaponGraphical),&Parms);
	}
	static FName NAME_ABaseCharacter_FiringGraphical = FName(TEXT("FiringGraphical"));
	void ABaseCharacter::FiringGraphical(bool bReturnIsFiring)
	{
		BaseCharacter_eventFiringGraphical_Parms Parms;
		Parms.bReturnIsFiring=bReturnIsFiring ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABaseCharacter_FiringGraphical),&Parms);
	}
	static FName NAME_ABaseCharacter_MulticastEquipWeapon = FName(TEXT("MulticastEquipWeapon"));
	void ABaseCharacter::MulticastEquipWeapon(bool bEquipWeapon)
	{
		BaseCharacter_eventMulticastEquipWeapon_Parms Parms;
		Parms.bEquipWeapon=bEquipWeapon ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ABaseCharacter_MulticastEquipWeapon),&Parms);
	}
	static FName NAME_ABaseCharacter_MulticastFire = FName(TEXT("MulticastFire"));
	void ABaseCharacter::MulticastFire()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABaseCharacter_MulticastFire),NULL);
	}
	void ABaseCharacter::StaticRegisterNativesABaseCharacter()
	{
		UClass* Class = ABaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasWeapon", &ABaseCharacter::execHasWeapon },
			{ "MulticastEquipWeapon", &ABaseCharacter::execMulticastEquipWeapon },
			{ "MulticastFire", &ABaseCharacter::execMulticastFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics
	{
		static void NewProp_bEquipWeapon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEquipWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::NewProp_bEquipWeapon_SetBit(void* Obj)
	{
		((BaseCharacter_eventEquipWeaponGraphical_Parms*)Obj)->bEquipWeapon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::NewProp_bEquipWeapon = { "bEquipWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseCharacter_eventEquipWeaponGraphical_Parms), &Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::NewProp_bEquipWeapon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::NewProp_bEquipWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "EquipWeaponGraphical", nullptr, nullptr, sizeof(BaseCharacter_eventEquipWeaponGraphical_Parms), Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_FiringGraphical_Statics
	{
		static void NewProp_bReturnIsFiring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnIsFiring;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseCharacter_FiringGraphical_Statics::NewProp_bReturnIsFiring_SetBit(void* Obj)
	{
		((BaseCharacter_eventFiringGraphical_Parms*)Obj)->bReturnIsFiring = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseCharacter_FiringGraphical_Statics::NewProp_bReturnIsFiring = { "bReturnIsFiring", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseCharacter_eventFiringGraphical_Parms), &Z_Construct_UFunction_ABaseCharacter_FiringGraphical_Statics::NewProp_bReturnIsFiring_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_FiringGraphical_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_FiringGraphical_Statics::NewProp_bReturnIsFiring,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_FiringGraphical_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_FiringGraphical_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "FiringGraphical", nullptr, nullptr, sizeof(BaseCharacter_eventFiringGraphical_Parms), Z_Construct_UFunction_ABaseCharacter_FiringGraphical_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_FiringGraphical_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_FiringGraphical_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_FiringGraphical_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_FiringGraphical()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_FiringGraphical_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics
	{
		struct BaseCharacter_eventHasWeapon_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BaseCharacter_eventHasWeapon_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseCharacter_eventHasWeapon_Parms), &Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "HasWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::BaseCharacter_eventHasWeapon_Parms), Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_HasWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_HasWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics
	{
		static void NewProp_bEquipWeapon_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEquipWeapon;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::NewProp_bEquipWeapon_SetBit(void* Obj)
	{
		((BaseCharacter_eventMulticastEquipWeapon_Parms*)Obj)->bEquipWeapon = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::NewProp_bEquipWeapon = { "bEquipWeapon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BaseCharacter_eventMulticastEquipWeapon_Parms), &Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::NewProp_bEquipWeapon_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::NewProp_bEquipWeapon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "MulticastEquipWeapon", nullptr, nullptr, sizeof(BaseCharacter_eventMulticastEquipWeapon_Parms), Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABaseCharacter_MulticastFire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABaseCharacter_MulticastFire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_MulticastFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "MulticastFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABaseCharacter_MulticastFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_MulticastFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABaseCharacter_MulticastFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_MulticastFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseCharacter);
	UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
	{
		return ABaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletStartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BulletStartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseCharacter_EquipWeaponGraphical, "EquipWeaponGraphical" }, // 1712480279
		{ &Z_Construct_UFunction_ABaseCharacter_FiringGraphical, "FiringGraphical" }, // 2045112659
		{ &Z_Construct_UFunction_ABaseCharacter_HasWeapon, "HasWeapon" }, // 4237297528
		{ &Z_Construct_UFunction_ABaseCharacter_MulticastEquipWeapon, "MulticastEquipWeapon" }, // 786716208
		{ &Z_Construct_UFunction_ABaseCharacter_MulticastFire, "MulticastFire" }, // 4282318546
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/BaseCharacter.h" },
		{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BulletStartPosition_MetaData[] = {
		{ "Category", "BaseCharacter" },
		{ "Comment", "/**\n\x09 * A scene component to store the position that hit scan shots start from. For the enemy character this could\n\x09 * be placed close to the guns position for example and for the player character it can be placed close to the\n\x09 * camera position.\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
		{ "ToolTip", "A scene component to store the position that hit scan shots start from. For the enemy character this could\nbe placed close to the guns position for example and for the player character it can be placed close to the\ncamera position." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BulletStartPosition = { "BulletStartPosition", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseCharacter, BulletStartPosition), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BulletStartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BulletStartPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "BaseCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/BaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABaseCharacter, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_BulletStartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_HealthComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseCharacter_Statics::ClassParams = {
		&ABaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABaseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseCharacter()
	{
		if (!Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton, Z_Construct_UClass_ABaseCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<ABaseCharacter>()
	{
		return ABaseCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
	ABaseCharacter::~ABaseCharacter() {}
	struct Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Characters_BaseCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Characters_BaseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseCharacter, ABaseCharacter::StaticClass, TEXT("ABaseCharacter"), &Z_Registration_Info_UClass_ABaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseCharacter), 3079534356U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Characters_BaseCharacter_h_813493101(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Characters_BaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Characters_BaseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
