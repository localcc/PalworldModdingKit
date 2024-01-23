using UnrealBuildTool;

public class FSR2MovieRenderPipeline : ModuleRules {
    public FSR2MovieRenderPipeline(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AnimGraphRuntime",
            "AnimationCore",
            "AudioMixer",
            "Constraints",
            "Core",
            "CoreUObject",
            "DeveloperSettings",
            "Engine",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "MovieRenderPipelineCore",
            "MovieScene",
            "MovieSceneTracks",
            "OpenColorIO",
            "PropertyPath",
            "Slate",
            "SlateCore",
            "UMG",
        });
    }
}
