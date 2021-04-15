// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/PlayerPawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPawnBase() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_APlayerPawnBase_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_APlayerPawnBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
	SNAKEGAME_API UFunction* Z_Construct_UFunction_APlayerPawnBase_GetScore();
	SNAKEGAME_API UFunction* Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput();
	SNAKEGAME_API UFunction* Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASuperFoodBP_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_AFood_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_ASnakeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void APlayerPawnBase::StaticRegisterNativesAPlayerPawnBase()
	{
		UClass* Class = APlayerPawnBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetScore", &APlayerPawnBase::execGetScore },
			{ "HandlePlayerHorizontalInput", &APlayerPawnBase::execHandlePlayerHorizontalInput },
			{ "HandlePlayerVerticalInput", &APlayerPawnBase::execHandlePlayerVerticalInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerPawnBase_GetScore_Statics
	{
		struct PlayerPawnBase_eventGetScore_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerPawnBase_GetScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPawnBase_eventGetScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawnBase_GetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawnBase_GetScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawnBase_GetScore_Statics::Function_MetaDataParams[] = {
		{ "Category", "SnakePawn" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawnBase_GetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawnBase, nullptr, "GetScore", sizeof(PlayerPawnBase_eventGetScore_Parms), Z_Construct_UFunction_APlayerPawnBase_GetScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_GetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPawnBase_GetScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_GetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPawnBase_GetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerPawnBase_GetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics
	{
		struct PlayerPawnBase_eventHandlePlayerHorizontalInput_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPawnBase_eventHandlePlayerHorizontalInput_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawnBase, nullptr, "HandlePlayerHorizontalInput", sizeof(PlayerPawnBase_eventHandlePlayerHorizontalInput_Parms), Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics
	{
		struct PlayerPawnBase_eventHandlePlayerVerticalInput_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPawnBase_eventHandlePlayerVerticalInput_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerPawnBase, nullptr, "HandlePlayerVerticalInput", sizeof(PlayerPawnBase_eventHandlePlayerVerticalInput_Parms), Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerPawnBase_NoRegister()
	{
		return APlayerPawnBase::StaticClass();
	}
	struct Z_Construct_UClass_APlayerPawnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuperFoodBPActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SuperFoodBPActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuperFoodBPActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuperFoodBPActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FoodActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoodActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SnakeActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnakeActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SnakeActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerPawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerPawnBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerPawnBase_GetScore, "GetScore" }, // 1962069388
		{ &Z_Construct_UFunction_APlayerPawnBase_HandlePlayerHorizontalInput, "HandlePlayerHorizontalInput" }, // 1158913565
		{ &Z_Construct_UFunction_APlayerPawnBase_HandlePlayerVerticalInput, "HandlePlayerVerticalInput" }, // 3930890288
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerPawnBase.h" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SuperFoodBPActorClass_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SuperFoodBPActorClass = { "SuperFoodBPActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawnBase, SuperFoodBPActorClass), Z_Construct_UClass_ASuperFoodBP_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SuperFoodBPActorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SuperFoodBPActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SuperFoodBPActor_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SuperFoodBPActor = { "SuperFoodBPActor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawnBase, SuperFoodBPActor), Z_Construct_UClass_ASuperFoodBP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SuperFoodBPActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SuperFoodBPActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActorClass_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActorClass = { "FoodActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawnBase, FoodActorClass), Z_Construct_UClass_AFood_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActor_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActor = { "FoodActor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawnBase, FoodActor), Z_Construct_UClass_AFood_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass = { "SnakeActorClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawnBase, SnakeActorClass), Z_Construct_UClass_ASnakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor = { "SnakeActor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawnBase, SnakeActor), Z_Construct_UClass_ASnakeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera_MetaData[] = {
		{ "Category", "PlayerPawnBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerPawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera = { "PawnCamera", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerPawnBase, PawnCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerPawnBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SuperFoodBPActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SuperFoodBPActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_FoodActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_SnakeActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerPawnBase_Statics::NewProp_PawnCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerPawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerPawnBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerPawnBase_Statics::ClassParams = {
		&APlayerPawnBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerPawnBase_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerPawnBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerPawnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerPawnBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerPawnBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerPawnBase, 3787178210);
	template<> SNAKEGAME_API UClass* StaticClass<APlayerPawnBase>()
	{
		return APlayerPawnBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerPawnBase(Z_Construct_UClass_APlayerPawnBase, &APlayerPawnBase::StaticClass, TEXT("/Script/SnakeGame"), TEXT("APlayerPawnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerPawnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
