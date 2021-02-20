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
// End Cross Module References
	DEFINE_FUNCTION(AHL_Pod::execSimpleExposedFunction)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->SimpleExposedFunction(Z_Param_speed);
		P_NATIVE_END;
	}
	void AHL_Pod::StaticRegisterNativesAHL_Pod()
	{
		UClass* Class = AHL_Pod::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SimpleExposedFunction", &AHL_Pod::execSimpleExposedFunction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHL_Pod_SimpleExposedFunction_Statics
	{
		struct HL_Pod_eventSimpleExposedFunction_Parms
		{
			int32 speed;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHL_Pod_SimpleExposedFunction_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HL_Pod_eventSimpleExposedFunction_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHL_Pod_SimpleExposedFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HL_Pod_eventSimpleExposedFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHL_Pod_SimpleExposedFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHL_Pod_SimpleExposedFunction_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHL_Pod_SimpleExposedFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHL_Pod_SimpleExposedFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HL_Pod.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHL_Pod_SimpleExposedFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHL_Pod, nullptr, "SimpleExposedFunction", nullptr, nullptr, sizeof(HL_Pod_eventSimpleExposedFunction_Parms), Z_Construct_UFunction_AHL_Pod_SimpleExposedFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHL_Pod_SimpleExposedFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHL_Pod_SimpleExposedFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHL_Pod_SimpleExposedFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHL_Pod_SimpleExposedFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHL_Pod_SimpleExposedFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHL_Pod_NoRegister()
	{
		return AHL_Pod::StaticClass();
	}
	struct Z_Construct_UClass_AHL_Pod_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHL_Pod_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Hyperloop,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHL_Pod_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHL_Pod_SimpleExposedFunction, "SimpleExposedFunction" }, // 2962673214
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHL_Pod_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "HL_Pod.h" },
		{ "ModuleRelativePath", "Public/HL_Pod.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHL_Pod_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHL_Pod>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHL_Pod_Statics::ClassParams = {
		&AHL_Pod::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
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
	IMPLEMENT_CLASS(AHL_Pod, 2257655594);
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
