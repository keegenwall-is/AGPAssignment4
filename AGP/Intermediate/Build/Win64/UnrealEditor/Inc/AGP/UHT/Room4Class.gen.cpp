// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/Room4Class.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoom4Class() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_ARoom4Class();
	AGP_API UClass* Z_Construct_UClass_ARoom4Class_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void ARoom4Class::StaticRegisterNativesARoom4Class()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoom4Class);
	UClass* Z_Construct_UClass_ARoom4Class_NoRegister()
	{
		return ARoom4Class::StaticClass();
	}
	struct Z_Construct_UClass_ARoom4Class_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoom4Class_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoom4Class_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Room4Class.h" },
		{ "ModuleRelativePath", "Room4Class.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoom4Class_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoom4Class>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoom4Class_Statics::ClassParams = {
		&ARoom4Class::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARoom4Class_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARoom4Class_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARoom4Class()
	{
		if (!Z_Registration_Info_UClass_ARoom4Class.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoom4Class.OuterSingleton, Z_Construct_UClass_ARoom4Class_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARoom4Class.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<ARoom4Class>()
	{
		return ARoom4Class::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoom4Class);
	ARoom4Class::~ARoom4Class() {}
	struct Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Room4Class_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Room4Class_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARoom4Class, ARoom4Class::StaticClass, TEXT("ARoom4Class"), &Z_Registration_Info_UClass_ARoom4Class, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoom4Class), 1215368240U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Room4Class_h_3565486117(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Room4Class_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_Room4Class_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
