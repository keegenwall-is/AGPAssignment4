// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/CharacterSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterSpawner() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_ACharacterSpawner();
	AGP_API UClass* Z_Construct_UClass_ACharacterSpawner_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void ACharacterSpawner::StaticRegisterNativesACharacterSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterSpawner);
	UClass* Z_Construct_UClass_ACharacterSpawner_NoRegister()
	{
		return ACharacterSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterSpawner.h" },
		{ "ModuleRelativePath", "CharacterSpawner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterSpawner_Statics::ClassParams = {
		&ACharacterSpawner::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACharacterSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACharacterSpawner()
	{
		if (!Z_Registration_Info_UClass_ACharacterSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterSpawner.OuterSingleton, Z_Construct_UClass_ACharacterSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterSpawner.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<ACharacterSpawner>()
	{
		return ACharacterSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterSpawner);
	ACharacterSpawner::~ACharacterSpawner() {}
	struct Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_CharacterSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_CharacterSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterSpawner, ACharacterSpawner::StaticClass, TEXT("ACharacterSpawner"), &Z_Registration_Info_UClass_ACharacterSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterSpawner), 1303081873U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_CharacterSpawner_h_2215993421(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_CharacterSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_CharacterSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
