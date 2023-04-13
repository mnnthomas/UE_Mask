// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Mask : ModuleRules
{
	public Mask(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
