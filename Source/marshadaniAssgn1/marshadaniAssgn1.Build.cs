// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class marshadaniAssgn1 : ModuleRules
{
	public marshadaniAssgn1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
