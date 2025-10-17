using UnrealBuildTool;

public class UE5_Ball_GameTarget : TargetRules
{
	public UE5_Ball_GameTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("UE5_Ball_Game");
	}
}
