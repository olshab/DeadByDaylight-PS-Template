#pragma once

#include "CoreMinimal.h"
#include "SaveDataBase.h"
#include "SavedDailyRitualContainerV7.h"
#include "KeyTupleBool.h"
#include "ConsoleUserSettings.h"
#include "UObject/NoExportTypes.h"
#include "CharacterKeyTuple.h"
#include "CharacterLoadoutPresetsList.h"
#include "SavedStatsDataV7.h"
#include "DailyRitualSaveData.h"
#include "LegacySavedPlayerLoadoutData.h"
#include "SavedFearMarketOfferingInstanceV7.h"
#include "SavedSpecialEventDataV8.h"
#include "SavedReleaseDataV8.h"
#include "LegacySavedBloodWebPersistentData.h"
#include "UIViewFlagSaveData.h"
#include "CharacterCustomizationPresetsList.h"
#include "SaveDataV8.generated.h"

USTRUCT()
struct FSaveDataV8: public FSaveDataBase
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FString PlayerUID;

	UPROPERTY(SaveGame)
	int32 SelectedCamperIndex;

	UPROPERTY(SaveGame)
	int32 SelectedSlasherIndex;

	UPROPERTY(SaveGame)
	TArray<FName> Offerings;

	UPROPERTY(SaveGame)
	bool FirstTimePlaying;

	UPROPERTY(SaveGame)
	bool HasSeenLightSensitivity;

	UPROPERTY(SaveGame)
	int32 ConsecutiveMatchStreak;

	UPROPERTY(SaveGame)
	bool HasBeenGivenKillerTutorialEndReward;

	UPROPERTY(SaveGame)
	bool HasBeenGivenSurvivorTutorialEndReward;

	UPROPERTY(SaveGame)
	bool HasSeenBloodpointsOnboardingCurrencyPopup;

	UPROPERTY(SaveGame)
	bool HasSeenAuricCellsOnboardingCurrencyPopup;

	UPROPERTY(SaveGame)
	bool HasSeenIridescentShardsOnboardingCurrencyPopup;

	UPROPERTY(SaveGame)
	uint64 CurrentSeasonTicks;

	UPROPERTY(SaveGame)
	int32 LastConnectedCharacterIndex;

	UPROPERTY(SaveGame)
	FString DisconnectPenaltyTime;

	UPROPERTY(SaveGame)
	FString LastMatchEndTime;

	UPROPERTY(SaveGame)
	FString LastMatchStartTime;

	UPROPERTY(SaveGame)
	FString LastKillerMatchEndTime;

	UPROPERTY(SaveGame)
	FString LastSurvivorMatchEndTime;

	UPROPERTY(SaveGame)
	int32 CumulativeMatches;

	UPROPERTY(SaveGame)
	TArray<FKeyTupleBool> PageVisited;

	UPROPERTY(SaveGame)
	TArray<FKeyTupleBool> ChatVisible;

	UPROPERTY(SaveGame)
	int32 CumulativeMatchesAsSurvivor;

	UPROPERTY(SaveGame)
	int32 CumulativeMatchesAsKiller;

	UPROPERTY(SaveGame)
	int32 CumulativeMatchesAsSurvivorNoFriends;

	UPROPERTY(SaveGame)
	int32 CumulativeMatchesAsKillerNoFriends;

	UPROPERTY(SaveGame)
	FDateTime LastMatchTimestamp;

	UPROPERTY(SaveGame)
	FDateTime LastSessionTimestamp;

	UPROPERTY(SaveGame)
	int32 CumulativeSessions;

	UPROPERTY(SaveGame)
	FString CumulativePlaytime;

	UPROPERTY(SaveGame)
	TArray<FCharacterKeyTuple> CharacterData;

	UPROPERTY(SaveGame)
	TArray<FName> OwnedCharms;

	UPROPERTY(SaveGame)
	FSavedDailyRitualContainerV7 DailyRituals;

	UPROPERTY(SaveGame)
	FSavedFearMarketOfferingInstanceV7 FearMarket;

	UPROPERTY(SaveGame)
	FLegacySavedPlayerLoadoutData LastLoadout;

	UPROPERTY(SaveGame)
	FConsoleUserSettings ConsoleUserSettings;

	UPROPERTY(SaveGame)
	TArray<FSavedStatsDataV7> PlayerStatProgression;

	UPROPERTY(SaveGame)
	TArray<FString> OwnedContent;

	UPROPERTY(SaveGame)
	TArray<FSavedSpecialEventDataV8> SpecialEvent;

	UPROPERTY(SaveGame)
	TArray<FSavedReleaseDataV8> Releases;

	UPROPERTY(SaveGame)
	FLegacySavedBloodWebPersistentData BloodStoreKillers;

	UPROPERTY(SaveGame)
	FLegacySavedBloodWebPersistentData BloodStoreSurvivors;

	UPROPERTY(SaveGame)
	TArray<FKeyTupleBool> OnBoardingCompleted;

	UPROPERTY(SaveGame)
	FDailyRitualSaveData DailyRitualSaveData;

	UPROPERTY(SaveGame)
	FUIViewFlagSaveData UIViewFlags;

	UPROPERTY(SaveGame)
	bool IsCrossplayAllowed;

	UPROPERTY(SaveGame)
	bool AutoDeclineFriendInvites;

	UPROPERTY(SaveGame)
	bool HasBeginnerTooltipsBeenDisabledAtLevel;

	UPROPERTY(SaveGame)
	bool ShowPortraitBorder;

	UPROPERTY(SaveGame)
	TArray<FCharacterCustomizationPresetsList> CharacterCustomizationPresets;

	UPROPERTY(SaveGame)
	TArray<FCharacterLoadoutPresetsList> CharacterLoadoutPresets;

public:
	DEADBYDAYLIGHT_API FSaveDataV8();
};

FORCEINLINE uint32 GetTypeHash(const FSaveDataV8) { return 0; }
