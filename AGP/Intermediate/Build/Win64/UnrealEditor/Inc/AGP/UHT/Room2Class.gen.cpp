// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Room2Class.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoom2Class() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_ARoom2Class();
	AGP_API UClass* Z_Construct_UClass_ARoom2Class_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void ARoom2Class::StaticRegisterNativesARoom2Class()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoom2Class);
	UClass* Z_Construct_UClass_ARoom2Class_NoRegister()
	{
		return ARoom2Class::StaticClass();
	}
	struct Z_Construct_UClass_ARoom2Class_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoom2Class_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoom2Class_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Room2Class.h" },
		{ "ModuleRelativePath", "Room2Class.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoom2Class_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoom2Class>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoom2Class_Statics::ClassParams = {
		&ARoom2Class::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARoom2Class_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoom2Class_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoom2Class()
	{
		if (!Z_Registration_Info_UClass_ARoom2Class.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoom2Class.OuterSingleton, Z_Construct_UClass_ARoom2Class_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARoom2Class.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<ARoom2Class>()
	{
		return ARoom2Class::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoom2Class);
	ARoom2Class::~ARoom2Class() {}
	struct Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Room2Class_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Room2Class_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARoom2Class, ARoom2Class::StaticClass, TEXT("ARoom2Class"), &Z_Registration_Info_UClass_ARoom2Class, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoom2Class), 2001156008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Room2Class_h_7550834(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Room2Class_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Room2Class_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
