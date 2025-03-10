// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperZDPlaySlotOverrideAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperZDPlaySlotOverrideAction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimInstance_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDAnimSequence_NoRegister();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDPlaySlotOverrideAction();
	PAPERZD_API UClass* Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_NoRegister();
	PAPERZD_API UFunction* Z_Construct_UDelegateFunction_PaperZD_PaperZDPlaySlotOverrideOutputSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_PaperZD();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_PaperZD_PaperZDPlaySlotOverrideOutputSignature__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_PaperZD_PaperZDPlaySlotOverrideOutputSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Pin outputs as delegates\n" },
		{ "ModuleRelativePath", "Public/PaperZDPlaySlotOverrideAction.h" },
		{ "ToolTip", "Pin outputs as delegates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_PaperZD_PaperZDPlaySlotOverrideOutputSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_PaperZD, nullptr, "PaperZDPlaySlotOverrideOutputSignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_PaperZD_PaperZDPlaySlotOverrideOutputSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_PaperZD_PaperZDPlaySlotOverrideOutputSignature__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_PaperZD_PaperZDPlaySlotOverrideOutputSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_PaperZD_PaperZDPlaySlotOverrideOutputSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPaperZDPlaySlotOverrideOutputSignature_DelegateWrapper(const FMulticastScriptDelegate& PaperZDPlaySlotOverrideOutputSignature)
{
	PaperZDPlaySlotOverrideOutputSignature.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UPaperZDPlaySlotOverrideAction::execOnAnimationOverrideEnd)
	{
		P_GET_UBOOL(Z_Param_bCompleted);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAnimationOverrideEnd(Z_Param_bCompleted);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperZDPlaySlotOverrideAction::execPlayAnimationOverrideWithCallbacks)
	{
		P_GET_OBJECT(UPaperZDAnimInstance,Z_Param_AnimInstance);
		P_GET_OBJECT(UPaperZDAnimSequence,Z_Param_AnimSequence);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PlayRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StartingPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPaperZDPlaySlotOverrideAction**)Z_Param__Result=UPaperZDPlaySlotOverrideAction::PlayAnimationOverrideWithCallbacks(Z_Param_AnimInstance,Z_Param_AnimSequence,Z_Param_WorldContextObject,Z_Param_SlotName,Z_Param_PlayRate,Z_Param_StartingPosition);
		P_NATIVE_END;
	}
	void UPaperZDPlaySlotOverrideAction::StaticRegisterNativesUPaperZDPlaySlotOverrideAction()
	{
		UClass* Class = UPaperZDPlaySlotOverrideAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAnimationOverrideEnd", &UPaperZDPlaySlotOverrideAction::execOnAnimationOverrideEnd },
			{ "PlayAnimationOverrideWithCallbacks", &UPaperZDPlaySlotOverrideAction::execPlayAnimationOverrideWithCallbacks },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd_Statics
	{
		struct PaperZDPlaySlotOverrideAction_eventOnAnimationOverrideEnd_Parms
		{
			bool bCompleted;
		};
		static void NewProp_bCompleted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompleted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd_Statics::NewProp_bCompleted_SetBit(void* Obj)
	{
		((PaperZDPlaySlotOverrideAction_eventOnAnimationOverrideEnd_Parms*)Obj)->bCompleted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd_Statics::NewProp_bCompleted = { "bCompleted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperZDPlaySlotOverrideAction_eventOnAnimationOverrideEnd_Parms), &Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd_Statics::NewProp_bCompleted_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd_Statics::NewProp_bCompleted,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/* Called when the animation overrides completes. */" },
		{ "ModuleRelativePath", "Public/PaperZDPlaySlotOverrideAction.h" },
		{ "ToolTip", "Called when the animation overrides completes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperZDPlaySlotOverrideAction, nullptr, "OnAnimationOverrideEnd", nullptr, nullptr, Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd_Statics::PaperZDPlaySlotOverrideAction_eventOnAnimationOverrideEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd_Statics::PaperZDPlaySlotOverrideAction_eventOnAnimationOverrideEnd_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics
	{
		struct PaperZDPlaySlotOverrideAction_eventPlayAnimationOverrideWithCallbacks_Parms
		{
			UPaperZDAnimInstance* AnimInstance;
			const UPaperZDAnimSequence* AnimSequence;
			UObject* WorldContextObject;
			FName SlotName;
			float PlayRate;
			float StartingPosition;
			UPaperZDPlaySlotOverrideAction* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingPosition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::NewProp_AnimInstance = { "AnimInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperZDPlaySlotOverrideAction_eventPlayAnimationOverrideWithCallbacks_Parms, AnimInstance), Z_Construct_UClass_UPaperZDAnimInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperZDPlaySlotOverrideAction_eventPlayAnimationOverrideWithCallbacks_Parms, AnimSequence), Z_Construct_UClass_UPaperZDAnimSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::NewProp_AnimSequence_MetaData), Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::NewProp_AnimSequence_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperZDPlaySlotOverrideAction_eventPlayAnimationOverrideWithCallbacks_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperZDPlaySlotOverrideAction_eventPlayAnimationOverrideWithCallbacks_Parms, SlotName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperZDPlaySlotOverrideAction_eventPlayAnimationOverrideWithCallbacks_Parms, PlayRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::NewProp_StartingPosition = { "StartingPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperZDPlaySlotOverrideAction_eventPlayAnimationOverrideWithCallbacks_Parms, StartingPosition), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperZDPlaySlotOverrideAction_eventPlayAnimationOverrideWithCallbacks_Parms, ReturnValue), Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::NewProp_AnimInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::NewProp_AnimSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::NewProp_StartingPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Playback" },
		{ "Comment", "/**\n\x09 * Play the given animation through the override slot.\n\x09 * Triggers the OnCompleted/OnCancelled node when finished.\n\x09 */" },
		{ "CPP_Default_PlayRate", "1.000000" },
		{ "CPP_Default_SlotName", "DefaultSlot" },
		{ "CPP_Default_StartingPosition", "0.000000" },
		{ "ModuleRelativePath", "Public/PaperZDPlaySlotOverrideAction.h" },
		{ "ToolTip", "Play the given animation through the override slot.\nTriggers the OnCompleted/OnCancelled node when finished." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperZDPlaySlotOverrideAction, nullptr, "PlayAnimationOverrideWithCallbacks", nullptr, nullptr, Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::PaperZDPlaySlotOverrideAction_eventPlayAnimationOverrideWithCallbacks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::PaperZDPlaySlotOverrideAction_eventPlayAnimationOverrideWithCallbacks_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperZDPlaySlotOverrideAction);
	UClass* Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_NoRegister()
	{
		return UPaperZDPlaySlotOverrideAction::StaticClass();
	}
	struct Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCompleted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCompleted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCancelled_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCancelled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_PaperZD,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_OnAnimationOverrideEnd, "OnAnimationOverrideEnd" }, // 94832276
		{ &Z_Construct_UFunction_UPaperZDPlaySlotOverrideAction_PlayAnimationOverrideWithCallbacks, "PlayAnimationOverrideWithCallbacks" }, // 796003056
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Action handle for playing an animation override through an AnimInstance, while getting access to the completion events.\n */" },
		{ "IncludePath", "PaperZDPlaySlotOverrideAction.h" },
		{ "ModuleRelativePath", "Public/PaperZDPlaySlotOverrideAction.h" },
		{ "ToolTip", "Action handle for playing an animation override through an AnimInstance, while getting access to the completion events." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::NewProp_OnCompleted_MetaData[] = {
		{ "Comment", "/* Callback pin for when the override plays to its completion. */" },
		{ "ModuleRelativePath", "Public/PaperZDPlaySlotOverrideAction.h" },
		{ "ToolTip", "Callback pin for when the override plays to its completion." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::NewProp_OnCompleted = { "OnCompleted", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDPlaySlotOverrideAction, OnCompleted), Z_Construct_UDelegateFunction_PaperZD_PaperZDPlaySlotOverrideOutputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::NewProp_OnCompleted_MetaData), Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::NewProp_OnCompleted_MetaData) }; // 2701958110
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::NewProp_OnCancelled_MetaData[] = {
		{ "Comment", "/* Callback pin for when the override is canceled either by the user, or by being overridden by another slot in the same group. */" },
		{ "ModuleRelativePath", "Public/PaperZDPlaySlotOverrideAction.h" },
		{ "ToolTip", "Callback pin for when the override is canceled either by the user, or by being overridden by another slot in the same group." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::NewProp_OnCancelled = { "OnCancelled", nullptr, (EPropertyFlags)0x0040000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperZDPlaySlotOverrideAction, OnCancelled), Z_Construct_UDelegateFunction_PaperZD_PaperZDPlaySlotOverrideOutputSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::NewProp_OnCancelled_MetaData), Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::NewProp_OnCancelled_MetaData) }; // 2701958110
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::NewProp_OnCompleted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::NewProp_OnCancelled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperZDPlaySlotOverrideAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::ClassParams = {
		&UPaperZDPlaySlotOverrideAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPaperZDPlaySlotOverrideAction()
	{
		if (!Z_Registration_Info_UClass_UPaperZDPlaySlotOverrideAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperZDPlaySlotOverrideAction.OuterSingleton, Z_Construct_UClass_UPaperZDPlaySlotOverrideAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperZDPlaySlotOverrideAction.OuterSingleton;
	}
	template<> PAPERZD_API UClass* StaticClass<UPaperZDPlaySlotOverrideAction>()
	{
		return UPaperZDPlaySlotOverrideAction::StaticClass();
	}
	UPaperZDPlaySlotOverrideAction::UPaperZDPlaySlotOverrideAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperZDPlaySlotOverrideAction);
	UPaperZDPlaySlotOverrideAction::~UPaperZDPlaySlotOverrideAction() {}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDPlaySlotOverrideAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDPlaySlotOverrideAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperZDPlaySlotOverrideAction, UPaperZDPlaySlotOverrideAction::StaticClass, TEXT("UPaperZDPlaySlotOverrideAction"), &Z_Registration_Info_UClass_UPaperZDPlaySlotOverrideAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperZDPlaySlotOverrideAction), 1330592990U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDPlaySlotOverrideAction_h_4002197426(TEXT("/Script/PaperZD"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDPlaySlotOverrideAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZD_Public_PaperZDPlaySlotOverrideAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
