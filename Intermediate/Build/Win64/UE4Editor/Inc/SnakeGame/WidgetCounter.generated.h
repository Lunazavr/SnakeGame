// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_WidgetCounter_generated_h
#error "WidgetCounter.generated.h already included, missing '#pragma once' in WidgetCounter.h"
#endif
#define SNAKEGAME_WidgetCounter_generated_h

#define SnakeGame_Source_SnakeGame_WidgetCounter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartButtonClicked(); \
		P_NATIVE_END; \
	}


#define SnakeGame_Source_SnakeGame_WidgetCounter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartButtonClicked) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartButtonClicked(); \
		P_NATIVE_END; \
	}


#define SnakeGame_Source_SnakeGame_WidgetCounter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetCounter(); \
	friend struct Z_Construct_UClass_UWidgetCounter_Statics; \
public: \
	DECLARE_CLASS(UWidgetCounter, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(UWidgetCounter)


#define SnakeGame_Source_SnakeGame_WidgetCounter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetCounter(); \
	friend struct Z_Construct_UClass_UWidgetCounter_Statics; \
public: \
	DECLARE_CLASS(UWidgetCounter, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(UWidgetCounter)


#define SnakeGame_Source_SnakeGame_WidgetCounter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetCounter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetCounter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetCounter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetCounter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetCounter(UWidgetCounter&&); \
	NO_API UWidgetCounter(const UWidgetCounter&); \
public:


#define SnakeGame_Source_SnakeGame_WidgetCounter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetCounter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetCounter(UWidgetCounter&&); \
	NO_API UWidgetCounter(const UWidgetCounter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetCounter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetCounter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetCounter)


#define SnakeGame_Source_SnakeGame_WidgetCounter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartGame() { return STRUCT_OFFSET(UWidgetCounter, StartGame); }


#define SnakeGame_Source_SnakeGame_WidgetCounter_h_12_PROLOG
#define SnakeGame_Source_SnakeGame_WidgetCounter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_WidgetCounter_h_15_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_WidgetCounter_h_15_RPC_WRAPPERS \
	SnakeGame_Source_SnakeGame_WidgetCounter_h_15_INCLASS \
	SnakeGame_Source_SnakeGame_WidgetCounter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame_Source_SnakeGame_WidgetCounter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_WidgetCounter_h_15_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_WidgetCounter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_WidgetCounter_h_15_INCLASS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_WidgetCounter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class UWidgetCounter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeGame_Source_SnakeGame_WidgetCounter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
