// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Minesweeper3D : ModuleRules
{
	public Minesweeper3D(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
