// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT_NewSceneComponent_generated_h
#error "NewSceneComponent.generated.h already included, missing '#pragma once' in NewSceneComponent.h"
#endif
#define MYPROJECT_NewSceneComponent_generated_h

#define MyProject_Source_MyProject_NewSceneComponent_h_13_RPC_WRAPPERS
#define MyProject_Source_MyProject_NewSceneComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject_Source_MyProject_NewSceneComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNewSceneComponent(); \
	friend struct Z_Construct_UClass_UNewSceneComponent_Statics; \
public: \
	DECLARE_CLASS(UNewSceneComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UNewSceneComponent)


#define MyProject_Source_MyProject_NewSceneComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUNewSceneComponent(); \
	friend struct Z_Construct_UClass_UNewSceneComponent_Statics; \
public: \
	DECLARE_CLASS(UNewSceneComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(UNewSceneComponent)


#define MyProject_Source_MyProject_NewSceneComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNewSceneComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNewSceneComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNewSceneComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNewSceneComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNewSceneComponent(UNewSceneComponent&&); \
	NO_API UNewSceneComponent(const UNewSceneComponent&); \
public:


#define MyProject_Source_MyProject_NewSceneComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNewSceneComponent(UNewSceneComponent&&); \
	NO_API UNewSceneComponent(const UNewSceneComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNewSceneComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNewSceneComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNewSceneComponent)


#define MyProject_Source_MyProject_NewSceneComponent_h_13_PRIVATE_PROPERTY_OFFSET
#define MyProject_Source_MyProject_NewSceneComponent_h_10_PROLOG
#define MyProject_Source_MyProject_NewSceneComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_NewSceneComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_NewSceneComponent_h_13_RPC_WRAPPERS \
	MyProject_Source_MyProject_NewSceneComponent_h_13_INCLASS \
	MyProject_Source_MyProject_NewSceneComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Source_MyProject_NewSceneComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Source_MyProject_NewSceneComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject_Source_MyProject_NewSceneComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Source_MyProject_NewSceneComponent_h_13_INCLASS_NO_PURE_DECLS \
	MyProject_Source_MyProject_NewSceneComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class UNewSceneComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Source_MyProject_NewSceneComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
