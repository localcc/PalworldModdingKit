using UnrealBuildTool;

public class CommonGame : ModuleRules {
    public CommonGame(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "AnimationCore",
            "AudioMixer",
            "CommonInput",
            "CommonUI",
            "CommonUser",
            "Constraints",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "IrisStub",
            "MediaAssets",
            "MediaUtils",
            "ModularGameplayActors",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
