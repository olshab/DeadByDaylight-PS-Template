#pragma once

#include "CoreMinimal.h"
#include "ObliviousEffect.h"
#include "K25LamentConfigurationPossessionStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK25LamentConfigurationPossessionStatusEffect : public UObliviousEffect
{
	GENERATED_BODY()

public:
	UK25LamentConfigurationPossessionStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK25LamentConfigurationPossessionStatusEffect) { return 0; }
