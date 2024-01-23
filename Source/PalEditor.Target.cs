using UnrealBuildTool;

public class PalEditorTarget : TargetRules {
	public PalEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultWarningLevel = WarningLevel.Warning;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_1;

        ExtraModuleNames.AddRange(new string[] {
			"Pal",
		});
	}
}
