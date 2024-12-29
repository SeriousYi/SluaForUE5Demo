// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SluaDemoForUE5 : ModuleRules
{
	public SluaDemoForUE5(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
