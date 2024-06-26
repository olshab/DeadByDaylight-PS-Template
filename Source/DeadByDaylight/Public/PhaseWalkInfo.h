#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PhaseWalkInfo.generated.h"

USTRUCT(BlueprintType)
struct FPhaseWalkInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	bool IsActivePhaseWalking;

	UPROPERTY(BlueprintReadWrite)
	bool IsPassivePhaseWalking;

	UPROPERTY(BlueprintReadWrite)
	bool IsInteractionPhaseWalking;

	UPROPERTY(BlueprintReadWrite)
	FVector HuskLocation;

	UPROPERTY(BlueprintReadWrite)
	FRotator HuskRotation;

	UPROPERTY(BlueprintReadWrite)
	bool TeleportToHusk;

public:
	DEADBYDAYLIGHT_API FPhaseWalkInfo();
};

FORCEINLINE uint32 GetTypeHash(const FPhaseWalkInfo) { return 0; }
