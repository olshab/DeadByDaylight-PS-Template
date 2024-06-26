#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "ThrowRockInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UThrowRockInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _loudNoiseAudioRange;

	UPROPERTY(EditDefaultsOnly)
	float _scratchMarksApplicationDelay;

	UPROPERTY(EditDefaultsOnly)
	int32 _scratchMarksCountToSpawn;

	UPROPERTY(EditDefaultsOnly)
	float _diversionHeightOffset;

public:
	UThrowRockInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UThrowRockInteraction) { return 0; }
