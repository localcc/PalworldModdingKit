using UnrealBuildTool;

public class PalGameTarget : TargetRules {
	public PalGameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
        DefaultWarningLevel = WarningLevel.Warning;
		DefaultBuildSettings = BuildSettingsVersion.V2;
        IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;

        ExtraModuleNames.AddRange(new string[] {
			"Pal",
		});
	}
}
