// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AGP/RingListener.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRingListener() {}
// Cross Module References
	AGP_API UClass* Z_Construct_UClass_URingListener();
	AGP_API UClass* Z_Construct_UClass_URingListener_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AGP();
// End Cross Module References
	void IRingListener::OnRingSoundFinished()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnRingSoundFinished instead.");
	}
	void URingListener::StaticRegisterNativesURingListener()
	{
	}
	struct Z_Construct_UFunction_URingListener_OnRingSoundFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URingListener_OnRingSoundFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RingListener.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URingListener_OnRingSoundFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URingListener, nullptr, "OnRingSoundFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URingListener_OnRingSoundFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URingListener_OnRingSoundFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URingListener_OnRingSoundFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URingListener_OnRingSoundFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URingListener);
	UClass* Z_Construct_UClass_URingListener_NoRegister()
	{
		return URingListener::StaticClass();
	}
	struct Z_Construct_UClass_URingListener_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URingListener_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AGP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URingListener_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URingListener_OnRingSoundFinished, "OnRingSoundFinished" }, // 515042634
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URingListener_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "RingListener.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URingListener_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IRingListener>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URingListener_Statics::ClassParams = {
		&URingListener::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_URingListener_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URingListener_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URingListener()
	{
		if (!Z_Registration_Info_UClass_URingListener.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URingListener.OuterSingleton, Z_Construct_UClass_URingListener_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URingListener.OuterSingleton;
	}
	template<> AGP_API UClass* StaticClass<URingListener>()
	{
		return URingListener::StaticClass();
	}
	URingListener::URingListener(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URingListener);
	URingListener::~URingListener() {}
	static FName NAME_URingListener_OnRingSoundFinished = FName(TEXT("OnRingSoundFinished"));
	void IRingListener::Execute_OnRingSoundFinished(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(URingListener::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_URingListener_OnRingSoundFinished);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	struct Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_RingListener_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_RingListener_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URingListener, URingListener::StaticClass, TEXT("URingListener"), &Z_Registration_Info_UClass_URingListener, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URingListener), 3809408592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_RingListener_h_2113210057(TEXT("/Script/AGP"),
		Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_RingListener_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_keege_OneDrive_Documents_AGPAssignment4_AGPAssignment4_AGP_Source_AGP_RingListener_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
