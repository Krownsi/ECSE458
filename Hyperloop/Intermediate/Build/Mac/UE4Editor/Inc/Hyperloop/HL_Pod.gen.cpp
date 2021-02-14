// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hyperloop/Public/HL_Pod.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHL_Pod() {}
// Cross Module References
	HYPERLOOP_API UClass* Z_Construct_UClass_AHL_Pod_NoRegister();
	HYPERLOOP_API UClass* Z_Construct_UClass_AHL_Pod();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Hyperloop();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AHL_Pod::StaticRegisterNativesAHL_Pod()
	{
	}
	UClass* Z_Construct_UClass_AHL_Pod_NoRegister()
	{
		return AHL_Pod::StaticClass();
	}
	struct Z_Construct_UClass_AHL_Pod_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pod_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHL_Pod_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Hyperloop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHL_Pod_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HL_Pod.h" },
		{ "ModuleRelativePath", "Public/HL_Pod.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHL_Pod_Statics::NewProp_Pod_MetaData[] = {
		{ "Category", "Setup" },
		{ "Comment", "// Static mesh is visible everywhere\n// Garbage collectiona auto setup\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HL_Pod.h" },
		{ "ToolTip", "Static mesh is visible everywhere\nGarbage collectiona auto setup" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHL_Pod_Statics::NewProp_Pod = { "Pod", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHL_Pod, Pod), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHL_Pod_Statics::NewProp_Pod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHL_Pod_Statics::NewProp_Pod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHL_Pod_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHL_Pod_Statics::NewProp_Pod,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHL_Pod_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHL_Pod>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHL_Pod_Statics::ClassParams = {
		&AHL_Pod::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHL_Pod_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHL_Pod_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHL_Pod_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHL_Pod_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHL_Pod()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHL_Pod_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHL_Pod, 196780121);
	template<> HYPERLOOP_API UClass* StaticClass<AHL_Pod>()
	{
		return AHL_Pod::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHL_Pod(Z_Construct_UClass_AHL_Pod, &AHL_Pod::StaticClass, TEXT("/Script/Hyperloop"), TEXT("AHL_Pod"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHL_Pod);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
