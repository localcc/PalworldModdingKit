using UnrealBuildTool;

public class Pal : ModuleRules {
    public Pal(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AkAudio",
            "AnimGraphRuntime",
            "AnimationCore",
            "AudioMixer",
            "Chaos",
            "CinematicCamera",
            "CustomizableObject",
            "CommonGame",
            "CommonInput",
            "CommonUI",
            "CommonUser",
            "Constraints",
            "Core",
            "CoreUObject",
            "DLSSBlueprint",
            "DeveloperSettings",
            "Engine",
            "Foliage",
            "GameplayCameras",
            "GameplayTags",
            "GameplayTasks",
            "InputCore",
            "IrisStub",
            "LevelSequence",
            "MediaAssets",
            "MediaUtils",
            "ModularGameplay",
            "ModularGameplayActors",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "NetCore",
            "Niagara",
            "NiagaraAnimNotifies",
            "NiagaraCore",
            "NiagaraShader",
            "OnlineSubsystem",
            "OnlineSubsystemUtils",
            "PhysicsCore",
            "PocketpairUser",
            "PropertyPath",
            "ReplicationGraph",
            "SignificanceManager",
            "Slate",
            "SlateCore",
            "TemplateSequence",
            "PPSkyCreatorPlugin",
            "UMG",
        });

    }
}
