using UnrealBuildTool;

public class UE5_Ball_GameEditorTarget : TargetRules
{
	public UE5_Ball_GameEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("UE5_Ball_Game");
	}
}
