using UnrealBuildTool;

public class CommonGame : ModuleRules {
    public CommonGame(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "CommonInput",
            "CommonUI",
            "CommonUser",
            "Core",
            "CoreUObject",
            "Engine",
            "GameplayTags",
            "InputCore",
            "ModularGameplayActors",
            "SlateCore",
            "UMG",
        });
    }
}
