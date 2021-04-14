// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/SuperFoodBP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSuperFoodBP() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_ASuperFoodBP_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASuperFoodBP();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	void ASuperFoodBP::StaticRegisterNativesASuperFoodBP()
	{
	}
	UClass* Z_Construct_UClass_ASuperFoodBP_NoRegister()
	{
		return ASuperFoodBP::StaticClass();
	}
	struct Z_Construct_UClass_ASuperFoodBP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASuperFoodBP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperFoodBP_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SuperFoodBP.h" },
		{ "ModuleRelativePath", "SuperFoodBP.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASuperFoodBP_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "SuperFoodBP" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SuperFoodBP.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASuperFoodBP_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASuperFoodBP, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASuperFoodBP_Statics::NewProp_MeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASuperFoodBP_Statics::NewProp_MeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASuperFoodBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASuperFoodBP_Statics::NewProp_MeshComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASuperFoodBP_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ASuperFoodBP, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASuperFoodBP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASuperFoodBP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASuperFoodBP_Statics::ClassParams = {
		&ASuperFoodBP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASuperFoodBP_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ASuperFoodBP_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASuperFoodBP_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASuperFoodBP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASuperFoodBP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASuperFoodBP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASuperFoodBP, 3172830321);
	template<> SNAKEGAME_API UClass* StaticClass<ASuperFoodBP>()
	{
		return ASuperFoodBP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASuperFoodBP(Z_Construct_UClass_ASuperFoodBP, &ASuperFoodBP::StaticClass, TEXT("/Script/SnakeGame"), TEXT("ASuperFoodBP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASuperFoodBP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
