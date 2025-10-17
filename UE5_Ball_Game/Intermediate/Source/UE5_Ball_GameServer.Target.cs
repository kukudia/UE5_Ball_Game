using UnrealBuildTool;

public class UE5_Ball_GameServerTarget : TargetRules
{
	public UE5_Ball_GameServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("UE5_Ball_Game");
	}
}
