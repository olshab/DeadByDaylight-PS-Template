#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "BonusTierTooltipVisibility.h"
#include "AtlantaCustomizedHudSettings.h"
#include "ConsoleUserSettings.generated.h"

USTRUCT()
struct FConsoleUserSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	TArray<FInputActionKeyMapping> ActionMappings;

	UPROPERTY(SaveGame)
	TArray<FInputAxisKeyMapping> AxisMappings;

	UPROPERTY(SaveGame)
	int32 MenuScaleFactor;

	UPROPERTY(SaveGame)
	int32 HudScaleFactor;

	UPROPERTY(SaveGame)
	int32 SkillCheckScaleFactor;

	UPROPERTY(SaveGame)
	bool LargeText;

	UPROPERTY(SaveGame)
	int32 Gamma;

	UPROPERTY(SaveGame)
	bool HUDPlayerNamesVisibility;

	UPROPERTY(SaveGame)
	bool HUDScoreEventsVisibility;

	UPROPERTY(SaveGame)
	bool HUDKillerHookCountVisibility;

	UPROPERTY(SaveGame)
	bool SurvivorSpecificPingIcon;

	UPROPERTY(SaveGame)
	bool LegacyPrestigePortraits;

	UPROPERTY(SaveGame)
	bool ChallengeProgression;

	UPROPERTY(SaveGame)
	bool ChallengeCompletion;

	UPROPERTY(SaveGame)
	int32 MainVolume;

	UPROPERTY(SaveGame)
	int32 MenuMusicVolume;

	UPROPERTY(SaveGame)
	bool UseHeadphones;

	UPROPERTY(SaveGame)
	bool MuteOnFocusLost;

	UPROPERTY(SaveGame)
	bool HapticsVibrationPS5;

	UPROPERTY(SaveGame)
	int32 KillerMouseSensitivity;

	UPROPERTY(SaveGame)
	int32 SurvivorMouseSensitivity;

	UPROPERTY(SaveGame)
	int32 KillerControllerSensitivity;

	UPROPERTY(SaveGame)
	int32 SurvivorControllerSensitivity;

	UPROPERTY(SaveGame)
	bool InvertY;

	UPROPERTY(SaveGame)
	bool SurvivorInvertY;

	UPROPERTY(SaveGame)
	bool KillerToggleInteractions;

	UPROPERTY(SaveGame)
	bool SurvivorToggleInteractions;

	UPROPERTY(SaveGame)
	bool SprintToCancel;

	UPROPERTY(SaveGame)
	int32 HighestWeightSeenNews;

	UPROPERTY(SaveGame)
	bool UseAtlantaCustomizedHuds;

	UPROPERTY(SaveGame)
	bool UseAtlantaSurvivorQuickTurn;

	UPROPERTY(SaveGame)
	bool UseAtlantaKillerQuickTurn;

	UPROPERTY(SaveGame)
	TArray<FAtlantaCustomizedHudSettings> AtlantaCustomizedHuds;

	UPROPERTY(SaveGame)
	bool HasAcceptedCrossplayPopup;

	UPROPERTY(SaveGame)
	bool HasAcceptedProgressionSystemInfoPopup;

	UPROPERTY(SaveGame)
	bool HasAcceptedCrossProgressionPopup;

	UPROPERTY(SaveGame)
	FBonusTierTooltipVisibility BonusTierTooltipVisibility;

	UPROPERTY(SaveGame)
	FString PartyPrivacyState;

	UPROPERTY(SaveGame)
	int32 ColorBlindMode;

	UPROPERTY(SaveGame)
	int32 ColorBlindModeIntensity;

	UPROPERTY(SaveGame)
	bool BeginnerMode;

	UPROPERTY(SaveGame)
	bool Subtitles;

	UPROPERTY(SaveGame)
	int32 SubtitlesBackgroundOpacity;

	UPROPERTY(SaveGame)
	int32 SubtitlesSize;

	UPROPERTY(SaveGame)
	bool IsAnonymousMode;

	UPROPERTY(SaveGame)
	bool HideYourName;

	UPROPERTY(SaveGame)
	bool HideOtherNames;

	UPROPERTY(SaveGame)
	bool HiddenMatchmakingDelay;

	UPROPERTY(SaveGame)
	bool HasAcceptedHapticsVibrationPopup;

public:
	DEADBYDAYLIGHT_API FConsoleUserSettings();
};

FORCEINLINE uint32 GetTypeHash(const FConsoleUserSettings) { return 0; }
