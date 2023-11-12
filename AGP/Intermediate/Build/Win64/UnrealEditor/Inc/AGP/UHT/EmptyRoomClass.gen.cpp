// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/EmptyRoomClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmptyRoomClass() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_AEmptyRoomClass();
	AGP_API UClass* Z_Construct_UClass_AEmptyRoomClass_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void AEmptyRoomClass::StaticRegisterNativesAEmptyRoomClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEmptyRoomClass);
	UClass* Z_Construct_UClass_AEmptyRoomClass_NoRegister()
	{
		return AEmptyRoomClass::StaticClass();
	}
	struct Z_Construct_UClass_AEmptyRoomClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEmptyRoomClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmptyRoomClass_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EmptyRoomClass.h" },
		{ "ModuleRelativePath", "EmptyRoomClass.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEmptyRoomClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEmptyRoomClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEmptyRoomClass_Statics::ClassParams = {
		&AEmptyRoomClass::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEmptyRoomClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEmptyRoomClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEmptyRoomClass()
	{
		if (!Z_Registration_Info_UClass_AEmptyRoomClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEmptyRoomClass.OuterSingleton, Z_Construct_UClass_AEmptyRoomClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEmptyRoomClass.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<AEmptyRoomClass>()
	{
		return AEmptyRoomClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEmptyRoomClass);
	AEmptyRoomClass::~AEmptyRoomClass() {}
	struct Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_EmptyRoomClass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_EmptyRoomClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEmptyRoomClass, AEmptyRoomClass::StaticClass, TEXT("AEmptyRoomClass"), &Z_Registration_Info_UClass_AEmptyRoomClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEmptyRoomClass), 3270401689U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_EmptyRoomClass_h_1579019932(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_EmptyRoomClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_AGPAssignment4_AGP_Source_AGP_EmptyRoomClass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
