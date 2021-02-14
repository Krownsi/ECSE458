// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HYPERLOOP_HL_Pod_generated_h
#error "HL_Pod.generated.h already included, missing '#pragma once' in HL_Pod.h"
#endif
#define HYPERLOOP_HL_Pod_generated_h

#define Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_SPARSE_DATA
#define Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_RPC_WRAPPERS
#define Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHL_Pod(); \
	friend struct Z_Construct_UClass_AHL_Pod_Statics; \
public: \
	DECLARE_CLASS(AHL_Pod, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hyperloop"), NO_API) \
	DECLARE_SERIALIZER(AHL_Pod)


#define Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAHL_Pod(); \
	friend struct Z_Construct_UClass_AHL_Pod_Statics; \
public: \
	DECLARE_CLASS(AHL_Pod, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Hyperloop"), NO_API) \
	DECLARE_SERIALIZER(AHL_Pod)


#define Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHL_Pod(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHL_Pod) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHL_Pod); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHL_Pod); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHL_Pod(AHL_Pod&&); \
	NO_API AHL_Pod(const AHL_Pod&); \
public:


#define Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHL_Pod(AHL_Pod&&); \
	NO_API AHL_Pod(const AHL_Pod&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHL_Pod); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHL_Pod); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHL_Pod)


#define Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Pod() { return STRUCT_OFFSET(AHL_Pod, Pod); }


#define Hyperloop_Source_Hyperloop_Public_HL_Pod_h_9_PROLOG
#define Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_PRIVATE_PROPERTY_OFFSET \
	Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_SPARSE_DATA \
	Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_RPC_WRAPPERS \
	Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_INCLASS \
	Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_PRIVATE_PROPERTY_OFFSET \
	Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_SPARSE_DATA \
	Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_INCLASS_NO_PURE_DECLS \
	Hyperloop_Source_Hyperloop_Public_HL_Pod_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HYPERLOOP_API UClass* StaticClass<class AHL_Pod>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Hyperloop_Source_Hyperloop_Public_HL_Pod_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
