#pragma once

#include "CoreMinimal.h"
#include "ELoadCompleteState.generated.h"

UENUM(BlueprintType)
enum class ELoadCompleteState : uint8
{
	InProgress,
	Success,
	ReloginRequested,
	FailedEAC,
	FailedRecoverable,
	FailedRecoverableProfileLoad,
	FailedUnequipedDisableditems,
	FailedBlocking,
	FailedBlockingNoDBDServer,
	FailedBlockingNotConnected,
	FailedBlockedNoNetworkConnection,
	FailedBlockingSharedAuthenticationFailed,
	FailedBlockingPlatformNotAuthenticated,
	FailedBlockingPlatformSubsystemNotInitialized,
	FailedBlockingOnlinePresenceNotInitialized,
	FailedBlockingPlatformNetUniqueIdInvalid,
	FailedBlockingInvalidLocalPlayer,
	FailedBlockingInvalidGameObjects,
	FailedBlockingInvalidSDA,
	FailedBlockingInvalidClientVersion,
	FailedBlockingInvalidAtlantaClientVersion,
	FailedBlockingWindowsStoreAccountNotLoggedIn,
	FailedBlockingSSLCACert,
	FailedBlockingUserCancelled,
	FailedBlockingCDNFailure,
	FailedBlockingCDNContentError,
	FailedBlockingCDNCantFindContentToDownload,
	FailedBlockingCDNNoPatchForCurrentPlatformAndVersion,
	FailedBlockingCDNNotEnoughDiskSpace,
	FailedBlockingCDNFailureToRetrieveContent,
	FailedRecoverableCDNUserCancelled,
	FailedBlockingVersionFileError,
	FailedBlockingRTMConnection,
	FailedBlockingMaxTrialsReached,
	FailedBlockingMirrorsHealthCheckFailed,
	FailedBlockingTutorialRewardsFetchFailed,
	FailedBlockingUserBanned,
	FailedRetrieveStoreItem,
};
