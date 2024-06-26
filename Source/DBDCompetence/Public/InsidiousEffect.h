#pragma once

#include "CoreMinimal.h"
#include "AbilityStealthUndetectableEffect.h"
#include "InsidiousEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UInsidiousEffect : public UAbilityStealthUndetectableEffect
{
	GENERATED_BODY()

public:
	UInsidiousEffect();
};

FORCEINLINE uint32 GetTypeHash(const UInsidiousEffect) { return 0; }
