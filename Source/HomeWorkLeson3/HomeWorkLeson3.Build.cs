// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HomeWorkLeson3 : ModuleRules
{
	public HomeWorkLeson3(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
