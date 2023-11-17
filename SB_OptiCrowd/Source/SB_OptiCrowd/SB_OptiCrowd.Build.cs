// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SB_OptiCrowd : ModuleRules
{
	public SB_OptiCrowd(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "AnimationBudgetAllocator" });
	}
}
