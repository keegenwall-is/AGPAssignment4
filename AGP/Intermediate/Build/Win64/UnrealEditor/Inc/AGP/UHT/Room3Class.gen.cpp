// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Room3Class.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoom3Class() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_ARoom3Class();
	AGP_API UClass* Z_Construct_UClass_ARoom3Class_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void ARoom3Class::StaticRegisterNativesARoom3Class()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoom3Class);
	UClass* Z_Construct_UClass_ARoom3Class_NoRegister()
	{
		return ARoom3Class::StaticClass();
	}
	struct Z_Construct_UClass_ARoom3Class_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoom3Class_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoom3Class_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Room3Class.h" },
		{ "ModuleRelativePath", "Room3Class.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoom3Class_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoom3Class>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoom3Class_Statics::ClassParams = {
		&ARoom3Class::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARoom3Class_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoom3Class_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoom3Class()
	{
		if (!Z_Registration_Info_UClass_ARoom3Class.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoom3Class.OuterSingleton, Z_Construct_UClass_ARoom3Class_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARoom3Class.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<ARoom3Class>()
	{
		return ARoom3Class::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoom3Class);
	ARoom3Class::~ARoom3Class() {}
	struct Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Room3Class_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Room3Class_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARoom3Class, ARoom3Class::StaticClass, TEXT("ARoom3Class"), &Z_Registration_Info_UClass_ARoom3Class, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoom3Class), 2113426075U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Room3Class_h_1288910113(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Room3Class_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_Room3Class_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
