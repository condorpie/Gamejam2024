// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Editors/Util/PaperZDEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PAPERZDEDITOR_PaperZDEditorSettings_generated_h
#error "PaperZDEditorSettings.generated.h already included, missing '#pragma once' in PaperZDEditorSettings.h"
#endif
#define PAPERZDEDITOR_PaperZDEditorSettings_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPaperZDEditorSettings(); \
	friend struct Z_Construct_UClass_UPaperZDEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UPaperZDEditorSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/PaperZDEditor"), NO_API) \
	DECLARE_SERIALIZER(UPaperZDEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPaperZDEditorSettings(UPaperZDEditorSettings&&); \
	NO_API UPaperZDEditorSettings(const UPaperZDEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPaperZDEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPaperZDEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPaperZDEditorSettings) \
	NO_API virtual ~UPaperZDEditorSettings();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_22_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PAPERZDEDITOR_API UClass* StaticClass<class UPaperZDEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_PaperZD_Source_PaperZDEditor_Private_Editors_Util_PaperZDEditorSettings_h


#define FOREACH_ENUM_EANIMSEQUENCEPLACEMENTPOLICY(op) \
	op(EAnimSequencePlacementPolicy::AlwaysAsk) \
	op(EAnimSequencePlacementPolicy::SameFolder) \
	op(EAnimSequencePlacementPolicy::SubFolder) 

enum class EAnimSequencePlacementPolicy : uint8;
template<> struct TIsUEnumClass<EAnimSequencePlacementPolicy> { enum { Value = true }; };
template<> PAPERZDEDITOR_API UEnum* StaticEnum<EAnimSequencePlacementPolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
