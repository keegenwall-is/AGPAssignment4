// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Pickups/LampPickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLampPickup() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	AGP_API UClass* Z_Construct_UClass_ALampPickup();
	AGP_API UClass* Z_Construct_UClass_ALampPickup_NoRegister();
	AGP_API UClass* Z_Construct_UClass_APickupBase();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void ALampPickup::StaticRegisterNativesALampPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALampPickup);
	UClass* Z_Construct_UClass_ALampPickup_NoRegister()
	{
		return ALampPickup::StaticClass();
	}
	struct Z_Construct_UClass_ALampPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ring_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxHearingDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHearingDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyCharacterReference_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyCharacterReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALampPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APickupBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALampPickup_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Pickups/LampPickup.h" },
		{ "ModuleRelativePath", "Pickups/LampPickup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALampPickup_Statics::NewProp_Ring_MetaData[] = {
		{ "Category", "LampPickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pickups/LampPickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALampPickup_Statics::NewProp_Ring = { "Ring", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALampPickup, Ring), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALampPickup_Statics::NewProp_Ring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALampPickup_Statics::NewProp_Ring_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALampPickup_Statics::NewProp_MaxHearingDistance_MetaData[] = {
		{ "Category", "LampPickup" },
		{ "ModuleRelativePath", "Pickups/LampPickup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALampPickup_Statics::NewProp_MaxHearingDistance = { "MaxHearingDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALampPickup, MaxHearingDistance), METADATA_PARAMS(Z_Construct_UClass_ALampPickup_Statics::NewProp_MaxHearingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALampPickup_Statics::NewProp_MaxHearingDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALampPickup_Statics::NewProp_EnemyCharacterReference_MetaData[] = {
		{ "Category", "LampPickup" },
		{ "ModuleRelativePath", "Pickups/LampPickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALampPickup_Statics::NewProp_EnemyCharacterReference = { "EnemyCharacterReference", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALampPickup, EnemyCharacterReference), Z_Construct_UClass_AEnemyCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALampPickup_Statics::NewProp_EnemyCharacterReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALampPickup_Statics::NewProp_EnemyCharacterReference_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALampPickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALampPickup_Statics::NewProp_Ring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALampPickup_Statics::NewProp_MaxHearingDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALampPickup_Statics::NewProp_EnemyCharacterReference,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALampPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALampPickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALampPickup_Statics::ClassParams = {
		&ALampPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALampPickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALampPickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALampPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALampPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALampPickup()
	{
		if (!Z_Registration_Info_UClass_ALampPickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALampPickup.OuterSingleton, Z_Construct_UClass_ALampPickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALampPickup.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<ALampPickup>()
	{
		return ALampPickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALampPickup);
	ALampPickup::~ALampPickup() {}
<<<<<<< HEAD
	struct Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Pickups_LampPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Pickups_LampPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALampPickup, ALampPickup::StaticClass, TEXT("ALampPickup"), &Z_Registration_Info_UClass_ALampPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALampPickup), 3305974925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Pickups_LampPickup_h_3730351314(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Pickups_LampPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Pickups_LampPickup_h_Statics::ClassInfo),
=======
	struct Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Pickups_LampPickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Pickups_LampPickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALampPickup, ALampPickup::StaticClass, TEXT("ALampPickup"), &Z_Registration_Info_UClass_ALampPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALampPickup), 3305974925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Pickups_LampPickup_h_3730351314(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Pickups_LampPickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Pickups_LampPickup_h_Statics::ClassInfo),
>>>>>>> Multiplayer
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
