#pragma once

#include "CoreMinimal.h"
#include "FlashlightablePointsLightingStrategy.h"
#include "BlindFlashlightableLightingStrategy.generated.h"

UCLASS(EditInlineNew)
class DBDGAMEPLAY_API UBlindFlashlightableLightingStrategy : public UFlashlightablePointsLightingStrategy
{
	GENERATED_BODY()

public:
	UBlindFlashlightableLightingStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UBlindFlashlightableLightingStrategy) { return 0; }
