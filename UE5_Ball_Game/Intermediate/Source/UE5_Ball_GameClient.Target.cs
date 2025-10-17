using UnrealBuildTool;

public class UE5_Ball_GameClientTarget : TargetRules
{
	public UE5_Ball_GameClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("UE5_Ball_Game");
	}
}
