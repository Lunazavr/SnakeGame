// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/WidgetCounter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetCounter() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_UWidgetCounter_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_UWidgetCounter();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
	SNAKEGAME_API UFunction* Z_Construct_UFunction_UWidgetCounter_StartButtonClicked();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UWidgetCounter::StaticRegisterNativesUWidgetCounter()
	{
		UClass* Class = UWidgetCounter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartButtonClicked", &UWidgetCounter::execStartButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetCounter_StartButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetCounter_StartButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WidgetCounter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetCounter_StartButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetCounter, nullptr, "StartButtonClicked", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetCounter_StartButtonClicked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UWidgetCounter_StartButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetCounter_StartButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetCounter_StartButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetCounter_NoRegister()
	{
		return UWidgetCounter::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetCounter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetCounter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetCounter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetCounter_StartButtonClicked, "StartButtonClicked" }, // 889256848
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetCounter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WidgetCounter.h" },
		{ "ModuleRelativePath", "WidgetCounter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetCounter_Statics::NewProp_StartGame_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "WidgetCounter.h" },
		{ "ToolTip", "???????? ?????? ? C++ ??????" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetCounter_Statics::NewProp_StartGame = { "StartGame", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetCounter, StartGame), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetCounter_Statics::NewProp_StartGame_MetaData, ARRAY_COUNT(Z_Construct_UClass_UWidgetCounter_Statics::NewProp_StartGame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetCounter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetCounter_Statics::NewProp_StartGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetCounter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetCounter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetCounter_Statics::ClassParams = {
		&UWidgetCounter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidgetCounter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UWidgetCounter_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetCounter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UWidgetCounter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetCounter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetCounter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetCounter, 2295506354);
	template<> SNAKEGAME_API UClass* StaticClass<UWidgetCounter>()
	{
		return UWidgetCounter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetCounter(Z_Construct_UClass_UWidgetCounter, &UWidgetCounter::StaticClass, TEXT("/Script/SnakeGame"), TEXT("UWidgetCounter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetCounter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
