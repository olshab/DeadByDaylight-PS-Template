#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "CrowdPlayLobbyEventsAnalytics.generated.h"

USTRUCT()
struct FCrowdPlayLobbyEventsAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString CrowdPlayId;

	UPROPERTY()
	FString LobbyEventName;

	UPROPERTY()
	FString InviteId;

	UPROPERTY()
	FString PlayerId;

public:
	DBDANALYTICS_API FCrowdPlayLobbyEventsAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FCrowdPlayLobbyEventsAnalytics) { return 0; }
