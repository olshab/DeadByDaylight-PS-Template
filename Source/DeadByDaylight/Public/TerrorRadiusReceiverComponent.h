#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnIsInTerrorRadiusChanged.h"
#include "TerrorRadiusReceiverComponent.generated.h"

class UCurveFloat;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTerrorRadiusReceiverComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnIsInTerrorRadiusChanged OnIsInTerrorRadiusChanged;

protected:
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _trVerticalDistanceFactor;

	UPROPERTY(EditAnywhere)
	float _heartbeatMasterVolumeInterpolationSpeed;

public:
	UFUNCTION(BlueprintPure)
	bool IsInTerrorRadiusRange() const;

	UFUNCTION(BlueprintPure)
	bool IsInTerrorRadius() const;

public:
	UTerrorRadiusReceiverComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTerrorRadiusReceiverComponent) { return 0; }
