// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyProject/NewSceneComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewSceneComponent() {}
// Cross Module References
	MYPROJECT_API UClass* Z_Construct_UClass_UNewSceneComponent_NoRegister();
	MYPROJECT_API UClass* Z_Construct_UClass_UNewSceneComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_MyProject();
// End Cross Module References
	void UNewSceneComponent::StaticRegisterNativesUNewSceneComponent()
	{
	}
	UClass* Z_Construct_UClass_UNewSceneComponent_NoRegister()
	{
		return UNewSceneComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNewSceneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewSceneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MyProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewSceneComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "NewSceneComponent.h" },
		{ "ModuleRelativePath", "NewSceneComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewSceneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewSceneComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNewSceneComponent_Statics::ClassParams = {
		&UNewSceneComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNewSceneComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UNewSceneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNewSceneComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNewSceneComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNewSceneComponent, 1909376511);
	template<> MYPROJECT_API UClass* StaticClass<UNewSceneComponent>()
	{
		return UNewSceneComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNewSceneComponent(Z_Construct_UClass_UNewSceneComponent, &UNewSceneComponent::StaticClass, TEXT("/Script/MyProject"), TEXT("UNewSceneComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewSceneComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
