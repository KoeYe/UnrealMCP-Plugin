// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealMCP/Public/UnrealMCPBridge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealMCPBridge() {}
// Cross Module References
	EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
	UNREALMCP_API UClass* Z_Construct_UClass_UUnrealMCPBridge();
	UNREALMCP_API UClass* Z_Construct_UClass_UUnrealMCPBridge_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealMCP();
// End Cross Module References
	void UUnrealMCPBridge::StaticRegisterNativesUUnrealMCPBridge()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnrealMCPBridge);
	UClass* Z_Construct_UClass_UUnrealMCPBridge_NoRegister()
	{
		return UUnrealMCPBridge::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealMCPBridge_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealMCPBridge_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealMCP,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealMCPBridge_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealMCPBridge_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Editor subsystem for MCP Bridge\n * Handles communication between external tools and the Unreal Editor\n * through a TCP socket connection. Commands are received as JSON and\n * routed to appropriate command handlers.\n */" },
#endif
		{ "IncludePath", "UnrealMCPBridge.h" },
		{ "ModuleRelativePath", "Public/UnrealMCPBridge.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor subsystem for MCP Bridge\nHandles communication between external tools and the Unreal Editor\nthrough a TCP socket connection. Commands are received as JSON and\nrouted to appropriate command handlers." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealMCPBridge_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealMCPBridge>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnrealMCPBridge_Statics::ClassParams = {
		&UUnrealMCPBridge::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealMCPBridge_Statics::Class_MetaDataParams), Z_Construct_UClass_UUnrealMCPBridge_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUnrealMCPBridge()
	{
		if (!Z_Registration_Info_UClass_UUnrealMCPBridge.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnrealMCPBridge.OuterSingleton, Z_Construct_UClass_UUnrealMCPBridge_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnrealMCPBridge.OuterSingleton;
	}
	template<> UNREALMCP_API UClass* StaticClass<UUnrealMCPBridge>()
	{
		return UUnrealMCPBridge::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealMCPBridge);
	struct Z_CompiledInDeferFile_FID_MCPtest_Plugins_UnrealMCP_Source_UnrealMCP_Public_UnrealMCPBridge_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MCPtest_Plugins_UnrealMCP_Source_UnrealMCP_Public_UnrealMCPBridge_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnrealMCPBridge, UUnrealMCPBridge::StaticClass, TEXT("UUnrealMCPBridge"), &Z_Registration_Info_UClass_UUnrealMCPBridge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnrealMCPBridge), 3367575876U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MCPtest_Plugins_UnrealMCP_Source_UnrealMCP_Public_UnrealMCPBridge_h_2904149964(TEXT("/Script/UnrealMCP"),
		Z_CompiledInDeferFile_FID_MCPtest_Plugins_UnrealMCP_Source_UnrealMCP_Public_UnrealMCPBridge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MCPtest_Plugins_UnrealMCP_Source_UnrealMCP_Public_UnrealMCPBridge_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
