#pragma once

#include "CoreMinimal.h"
#include "DedicatedSessionSearchCompletedEventData.generated.h"

USTRUCT()
struct FDedicatedSessionSearchCompletedEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	FString GameLiftSessionId;

	UPROPERTY(Transient)
	FString MatchId;

	UPROPERTY(Transient)
	FString FleetId;

	UPROPERTY(Transient)
	FString IpAddress;

	UPROPERTY(Transient)
	int32 Port;

	UPROPERTY(Transient)
	FString DnsName;

public:
	DEADBYDAYLIGHT_API FDedicatedSessionSearchCompletedEventData();
};

FORCEINLINE uint32 GetTypeHash(const FDedicatedSessionSearchCompletedEventData) { return 0; }
