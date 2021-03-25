// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/Barrier.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarrier() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_ABarrier_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_ABarrier();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
	SNAKEGAME_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	void ABarrier::StaticRegisterNativesABarrier()
	{
	}
	UClass* Z_Construct_UClass_ABarrier_NoRegister()
	{
		return ABarrier::StaticClass();
	}
	struct Z_Construct_UClass_ABarrier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarrier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarrier_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Barrier.h" },
		{ "ModuleRelativePath", "Barrier.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABarrier_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(ABarrier, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarrier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarrier>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABarrier_Statics::ClassParams = {
		&ABarrier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABarrier_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABarrier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarrier()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABarrier_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABarrier, 1044578216);
	template<> SNAKEGAME_API UClass* StaticClass<ABarrier>()
	{
		return ABarrier::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABarrier(Z_Construct_UClass_ABarrier, &ABarrier::StaticClass, TEXT("/Script/SnakeGame"), TEXT("ABarrier"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarrier);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
