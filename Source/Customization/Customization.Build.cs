using UnrealBuildTool;

public class Customization : ModuleRules {
	public Customization(ReadOnlyTargetRules Target) : base(Target) {
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		bLegacyPublicIncludePaths = false;
		ShadowVariableWarningLevel = WarningLevel.Warning;

		PublicDependencyModuleNames.AddRange(new string[] {
			"AnimationBudgetAllocator",
			"AnimationUtilities",
			"Core",
			"CoreUObject",
			"DBDAnimationBudgetAllocator",
			"Engine",
			"GameplayTags",
		});
	}
}
