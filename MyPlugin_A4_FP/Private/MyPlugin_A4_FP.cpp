// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyPlugin_A4_FP.h"

#define LOCTEXT_NAMESPACE "FMyPlugin_A4_FPModule"

void FMyPlugin_A4_FPModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FMyPlugin_A4_FPModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FMyPlugin_A4_FPModule, MyPlugin_A4_FP)