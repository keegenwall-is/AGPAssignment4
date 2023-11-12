// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/TableChairClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTableChairClass() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_ATableChairClass();
	AGP_API UClass* Z_Construct_UClass_ATableChairClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void ATableChairClass::StaticRegisterNativesATableChairClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATableChairClass);
	UClass* Z_Construct_UClass_ATableChairClass_NoRegister()
	{
		return ATableChairClass::StaticClass();
	}
	struct Z_Construct_UClass_ATableChairClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATableChairClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATableChairClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TableChairClass.h" },
		{ "ModuleRelativePath", "TableChairClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATableChairClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATableChairClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATableChairClass_Statics::ClassParams = {
		&ATableChairClass::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATableChairClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATableChairClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATableChairClass()
	{
		if (!Z_Registration_Info_UClass_ATableChairClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATableChairClass.OuterSingleton, Z_Construct_UClass_ATableChairClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATableChairClass.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<ATableChairClass>()
	{
		return ATableChairClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATableChairClass);
	ATableChairClass::~ATableChairClass() {}
	struct Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_TableChairClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_TableChairClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATableChairClass, ATableChairClass::StaticClass, TEXT("ATableChairClass"), &Z_Registration_Info_UClass_ATableChairClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATableChairClass), 3834684239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_TableChairClass_h_236887379(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_TableChairClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_TableChairClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
