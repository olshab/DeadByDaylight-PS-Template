#pragma once

#include "CoreMinimal.h"
#include "EExtMoveToStrafeFocusOptions.h"
#include "BehaviorTree/Tasks/BTTask_MoveTo.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ECharacterMovementTypes.h"
#include "BTTask_ExtMoveTo.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_ExtMoveTo : public UBTTask_MoveTo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBStrafeFocus;

	UPROPERTY(EditInstanceOnly)
	EExtMoveToStrafeFocusOptions StrafeFocus;

	UPROPERTY(EditInstanceOnly)
	bool StrafeFocusPitch;

	UPROPERTY(EditInstanceOnly)
	float StrafeNearFocusModeUnderDistance;

	UPROPERTY(EditInstanceOnly)
	float IntermittentOnStrafeFocusInterval;

	UPROPERTY(EditInstanceOnly)
	float IntermittentOnStrafeFocusDeviation;

	UPROPERTY(EditInstanceOnly)
	float IntermittentOffStrafeFocusInterval;

	UPROPERTY(EditInstanceOnly)
	float IntermittentOffStrafeFocusDeviation;

	UPROPERTY(EditInstanceOnly)
	float EndMoveStrafeFocusPrecisionAngle;

	UPROPERTY(EditInstanceOnly)
	bool StrafeFocusOwnerOnComponentBBKey;

	UPROPERTY(EditInstanceOnly)
	ECharacterMovementTypes ToGoalMovementMode;

	UPROPERTY(EditInstanceOnly)
	ECharacterMovementTypes NearGoalMovementMode;

	UPROPERTY(EditInstanceOnly)
	float NearGoalModeUnderDistance;

	UPROPERTY(EditInstanceOnly)
	float NormalMoveUnderNavLinkDistance;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIgnoreGroupAvoidance;

	UPROPERTY(EditInstanceOnly)
	float BlockedCheckInterval;

	UPROPERTY(EditInstanceOnly)
	int32 BlockedContinueTimes;

	UPROPERTY(EditInstanceOnly)
	float BlockedSpeedPercent;

	UPROPERTY(EditInstanceOnly)
	float RepathInterval;

	UPROPERTY(EditInstanceOnly)
	bool UseAccelerationForPaths;

	UPROPERTY(EditInstanceOnly)
	float PathReachedPointRadius;

	UPROPERTY(EditInstanceOnly)
	FName UseContextualAcceptableRadius;

public:
	UBTTask_ExtMoveTo();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_ExtMoveTo) { return 0; }
