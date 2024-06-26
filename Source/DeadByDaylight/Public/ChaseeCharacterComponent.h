#pragma once

#include "CoreMinimal.h"
#include "ChaseComponent.h"
#include "ChaseeCharacterComponent.generated.h"

class UChargeableComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UChaseeCharacterComponent : public UChaseComponent
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

	UFUNCTION()
	void Authority_OnGeneratorPercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete);

public:
	UChaseeCharacterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UChaseeCharacterComponent) { return 0; }
