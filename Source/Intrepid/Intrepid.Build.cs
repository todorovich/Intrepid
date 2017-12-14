// Copyright 2017 Micho Todorovich, all rights reserved.

using UnrealBuildTool;

public class Intrepid : ModuleRules
{
	public Intrepid(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(
            new string[] { "Core"
                         , "CoreUObject"
                         , "Engine"
                         , "EngineSettings"
                         , "InputCore"
                         , "OnlineSubsystem"
                         , "OnlineSubsystemUtils" });

		//PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
