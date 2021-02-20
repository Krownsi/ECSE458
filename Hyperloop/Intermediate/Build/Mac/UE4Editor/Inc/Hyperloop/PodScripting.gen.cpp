// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Hyperloop/PodScripting.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePodScripting() {}
// Cross Module References
	HYPERLOOP_API UClass* Z_Construct_UClass_UPodScripting_NoRegister();
	HYPERLOOP_API UClass* Z_Construct_UClass_UPodScripting();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Hyperloop();
// End Cross Module References
	DEFINE_FUNCTION(UPodScripting::execCalculateForce)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_force);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateForce(Z_Param_force);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPodScripting::execCalculateTilt)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_tilt);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateTilt(Z_Param_tilt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPodScripting::execCalculatePower)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_power);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculatePower(Z_Param_power);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPodScripting::execCalculateSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->CalculateSpeed(Z_Param_speed);
		P_NATIVE_END;
	}
	void UPodScripting::StaticRegisterNativesUPodScripting()
	{
		UClass* Class = UPodScripting::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateForce", &UPodScripting::execCalculateForce },
			{ "CalculatePower", &UPodScripting::execCalculatePower },
			{ "CalculateSpeed", &UPodScripting::execCalculateSpeed },
			{ "CalculateTilt", &UPodScripting::execCalculateTilt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPodScripting_CalculateForce_Statics
	{
		struct PodScripting_eventCalculateForce_Parms
		{
			float force;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_force;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPodScripting_CalculateForce_Statics::NewProp_force = { "force", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PodScripting_eventCalculateForce_Parms, force), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPodScripting_CalculateForce_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PodScripting_eventCalculateForce_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPodScripting_CalculateForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPodScripting_CalculateForce_Statics::NewProp_force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPodScripting_CalculateForce_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPodScripting_CalculateForce_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PodScripting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPodScripting_CalculateForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPodScripting, nullptr, "CalculateForce", nullptr, nullptr, sizeof(PodScripting_eventCalculateForce_Parms), Z_Construct_UFunction_UPodScripting_CalculateForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPodScripting_CalculateForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPodScripting_CalculateForce_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPodScripting_CalculateForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPodScripting_CalculateForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPodScripting_CalculateForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPodScripting_CalculatePower_Statics
	{
		struct PodScripting_eventCalculatePower_Parms
		{
			float power;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_power;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPodScripting_CalculatePower_Statics::NewProp_power = { "power", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PodScripting_eventCalculatePower_Parms, power), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPodScripting_CalculatePower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PodScripting_eventCalculatePower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPodScripting_CalculatePower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPodScripting_CalculatePower_Statics::NewProp_power,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPodScripting_CalculatePower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPodScripting_CalculatePower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PodScripting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPodScripting_CalculatePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPodScripting, nullptr, "CalculatePower", nullptr, nullptr, sizeof(PodScripting_eventCalculatePower_Parms), Z_Construct_UFunction_UPodScripting_CalculatePower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPodScripting_CalculatePower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPodScripting_CalculatePower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPodScripting_CalculatePower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPodScripting_CalculatePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPodScripting_CalculatePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPodScripting_CalculateSpeed_Statics
	{
		struct PodScripting_eventCalculateSpeed_Parms
		{
			float speed;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPodScripting_CalculateSpeed_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PodScripting_eventCalculateSpeed_Parms, speed), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPodScripting_CalculateSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PodScripting_eventCalculateSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPodScripting_CalculateSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPodScripting_CalculateSpeed_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPodScripting_CalculateSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPodScripting_CalculateSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PodScripting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPodScripting_CalculateSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPodScripting, nullptr, "CalculateSpeed", nullptr, nullptr, sizeof(PodScripting_eventCalculateSpeed_Parms), Z_Construct_UFunction_UPodScripting_CalculateSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPodScripting_CalculateSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPodScripting_CalculateSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPodScripting_CalculateSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPodScripting_CalculateSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPodScripting_CalculateSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPodScripting_CalculateTilt_Statics
	{
		struct PodScripting_eventCalculateTilt_Parms
		{
			float tilt;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_tilt;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPodScripting_CalculateTilt_Statics::NewProp_tilt = { "tilt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PodScripting_eventCalculateTilt_Parms, tilt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPodScripting_CalculateTilt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PodScripting_eventCalculateTilt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPodScripting_CalculateTilt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPodScripting_CalculateTilt_Statics::NewProp_tilt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPodScripting_CalculateTilt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPodScripting_CalculateTilt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PodScripting.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPodScripting_CalculateTilt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPodScripting, nullptr, "CalculateTilt", nullptr, nullptr, sizeof(PodScripting_eventCalculateTilt_Parms), Z_Construct_UFunction_UPodScripting_CalculateTilt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPodScripting_CalculateTilt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPodScripting_CalculateTilt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPodScripting_CalculateTilt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPodScripting_CalculateTilt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPodScripting_CalculateTilt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPodScripting_NoRegister()
	{
		return UPodScripting::StaticClass();
	}
	struct Z_Construct_UClass_UPodScripting_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPodScripting_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Hyperloop,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPodScripting_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPodScripting_CalculateForce, "CalculateForce" }, // 2014733330
		{ &Z_Construct_UFunction_UPodScripting_CalculatePower, "CalculatePower" }, // 3619230752
		{ &Z_Construct_UFunction_UPodScripting_CalculateSpeed, "CalculateSpeed" }, // 2958394481
		{ &Z_Construct_UFunction_UPodScripting_CalculateTilt, "CalculateTilt" }, // 64234426
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPodScripting_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PodScripting.h" },
		{ "ModuleRelativePath", "PodScripting.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPodScripting_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPodScripting>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPodScripting_Statics::ClassParams = {
		&UPodScripting::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPodScripting_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPodScripting_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPodScripting()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPodScripting_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPodScripting, 2342982144);
	template<> HYPERLOOP_API UClass* StaticClass<UPodScripting>()
	{
		return UPodScripting::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPodScripting(Z_Construct_UClass_UPodScripting, &UPodScripting::StaticClass, TEXT("/Script/Hyperloop"), TEXT("UPodScripting"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPodScripting);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
