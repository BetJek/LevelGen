// Copyright 2018 Pavlov Dmitriy

#pragma once

#include "EngineMinimal.h"
#include "ModuleManager.h"



class FLevelGenPluginRuntimeModule : public IModuleInterface
{
public:
	virtual void StartupModule() override {}
	virtual void ShutdownModule() override {}
};