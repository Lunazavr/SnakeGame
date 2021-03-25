// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_Barrier_generated_h
#error "Barrier.generated.h already included, missing '#pragma once' in Barrier.h"
#endif
#define SNAKEGAME_Barrier_generated_h

#define SnakeGame_Source_SnakeGame_Barrier_h_13_RPC_WRAPPERS
#define SnakeGame_Source_SnakeGame_Barrier_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define SnakeGame_Source_SnakeGame_Barrier_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABarrier(); \
	friend struct Z_Construct_UClass_ABarrier_Statics; \
public: \
	DECLARE_CLASS(ABarrier, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(ABarrier) \
	virtual UObject* _getUObject() const override { return const_cast<ABarrier*>(this); }


#define SnakeGame_Source_SnakeGame_Barrier_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABarrier(); \
	friend struct Z_Construct_UClass_ABarrier_Statics; \
public: \
	DECLARE_CLASS(ABarrier, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SnakeGame"), NO_API) \
	DECLARE_SERIALIZER(ABarrier) \
	virtual UObject* _getUObject() const override { return const_cast<ABarrier*>(this); }


#define SnakeGame_Source_SnakeGame_Barrier_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABarrier(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABarrier) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABarrier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABarrier); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABarrier(ABarrier&&); \
	NO_API ABarrier(const ABarrier&); \
public:


#define SnakeGame_Source_SnakeGame_Barrier_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABarrier(ABarrier&&); \
	NO_API ABarrier(const ABarrier&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABarrier); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABarrier); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABarrier)


#define SnakeGame_Source_SnakeGame_Barrier_h_13_PRIVATE_PROPERTY_OFFSET
#define SnakeGame_Source_SnakeGame_Barrier_h_10_PROLOG
#define SnakeGame_Source_SnakeGame_Barrier_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_Barrier_h_13_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_Barrier_h_13_RPC_WRAPPERS \
	SnakeGame_Source_SnakeGame_Barrier_h_13_INCLASS \
	SnakeGame_Source_SnakeGame_Barrier_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame_Source_SnakeGame_Barrier_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_Barrier_h_13_PRIVATE_PROPERTY_OFFSET \
	SnakeGame_Source_SnakeGame_Barrier_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_Barrier_h_13_INCLASS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_Barrier_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class ABarrier>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeGame_Source_SnakeGame_Barrier_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
