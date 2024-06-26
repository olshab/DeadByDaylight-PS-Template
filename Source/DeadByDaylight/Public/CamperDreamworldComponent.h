#pragma once

#include "CoreMinimal.h"
#include "OnCamperTriggeredDreamTrap.h"
#include "FastTimer.h"
#include "CharacterDreamworldComponent.h"
#include "SurvivorSleepiness.h"
#include "CamperDreamworldComponent.generated.h"

class ASlasherPlayer;
class ADBDPlayer;
class AWakerObject;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCamperDreamworldComponent : public UCharacterDreamworldComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable)
	FOnCamperTriggeredDreamTrap OnCamperTriggeredDreamTrap;

private:
	UPROPERTY(BlueprintReadOnly, Replicated, Transient, meta=(AllowPrivateAccess=true))
	FSurvivorSleepiness _survivorSleepiness;

	UPROPERTY(Replicated)
	float _sleepinessProtectionRemainingDuration;

	UPROPERTY(Transient)
	float _sleepGainPerSecond;

	UPROPERTY(Replicated, Transient)
	int32 _wakeUpByOtherCount;

	UPROPERTY(ReplicatedUsing=OnRep_ShowKiller, Transient)
	bool _showKiller;

	UPROPERTY(Transient)
	FFastTimer _killerGlimpseDurationTimer;

	UPROPERTY(Transient)
	FFastTimer _killerGlimpseCooldownTimer;

	UPROPERTY(Transient)
	float _glimpseMinDistance;

	UPROPERTY(Transient)
	float _glimpseMaxDistance;

	UPROPERTY(Transient)
	float _killerGlimpseCooldown;

	UPROPERTY(Transient)
	float _killerGlimpseDuration;

	UPROPERTY(Transient)
	int32 _wakeUpBySkillCheckCount;

	UPROPERTY(Transient)
	int32 _fellAsleepCount;

	UPROPERTY(Replicated, Transient)
	bool _forcedAsleep;

	UPROPERTY(Transient)
	AWakerObject* _linkedWaker;

	UPROPERTY(Transient)
	bool _useScriptedKillerVisibility;

	UPROPERTY(Replicated)
	bool _showKillerInstantly;

public:
	UFUNCTION(BlueprintPure)
	bool ShouldLookSleepyToLocalPlayer() const;

	UFUNCTION(BlueprintCallable)
	void SetScriptedKillerVisibility(bool useScriptedKillerVisibility);

private:
	UFUNCTION()
	void OnRep_ShowKiller();

public:
	UFUNCTION(BlueprintCallable)
	void Local_SetShowKiller(bool showKiller, bool instantly);

private:
	UFUNCTION()
	void InitializeTunableValues(ASlasherPlayer* killer);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void HandleShowKillerChanged(bool showKiller, bool instantly);

public:
	UFUNCTION(BlueprintPure)
	int32 GetWakeUpByOtherCount() const;

	UFUNCTION(BlueprintPure)
	bool CanWakeUpBySkillCheck() const;

	UFUNCTION(BlueprintPure)
	bool CanWakeUp() const;

	UFUNCTION(BlueprintCallable)
	void BroadcastCamperTriggeredDreamTrap(AActor* dreamObject);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_WakeUpByWakerObject();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_WakeUpByOther(ADBDPlayer* instigator);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_WakeUpByHook();

	UFUNCTION(BlueprintPure=false, BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SpawnDreamworldStatusEffect() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_PutAsleep();

private:
	UFUNCTION()
	void Authority_OnAttacked();

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_HandleSkillCheckFailure(bool wakeUpEveryoneInteracting, ADBDPlayer* instigator);

	UFUNCTION(BlueprintPure, BlueprintAuthorityOnly)
	int32 Authority_GetWakeUpBySkillCheckCount() const;

	UFUNCTION(BlueprintPure, BlueprintAuthorityOnly)
	int32 Authority_GetFellAsleepCount() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCamperDreamworldComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCamperDreamworldComponent) { return 0; }
