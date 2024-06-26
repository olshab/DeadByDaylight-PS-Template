#pragma once

#include "CoreMinimal.h"
#include "CompetenceFlagProvider.h"
#include "ModifierProvider.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "EGameplayModifierSource.h"
#include "Templates/SubclassOf.h"
#include "PerkManager.generated.h"

class UStatusEffectCollectionComponent;
class ADBDPlayer;
class UPerkCollectionComponent;
class UStatusEffect;
class UGameplayModifierContainer;
class UPerk;

UCLASS(BlueprintType, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPerkManager : public UActorComponent, public ICompetenceFlagProvider, public IModifierProvider
{
	GENERATED_BODY()

private:
	UPROPERTY(Export)
	UPerkCollectionComponent* _perks;

	UPROPERTY(Export)
	UStatusEffectCollectionComponent* _statusEffects;

public:
	UFUNCTION(BlueprintPure)
	bool HasStatusEffectOfClass(const UClass* type) const;

	UFUNCTION(BlueprintPure)
	bool HasStatusEffect(const FName statusEffectID) const;

	UFUNCTION(BlueprintPure)
	bool HasPerkSubFlag(FGameplayTag subFlag) const;

	UFUNCTION(BlueprintPure)
	bool HasPerkModifierOfType(FGameplayTag type) const;

	UFUNCTION(BlueprintPure)
	bool HasPerkFlags(const TArray<FGameplayTag> flags) const;

	UFUNCTION(BlueprintPure)
	bool HasPerkFlagFromSource(FGameplayTag flag, EGameplayModifierSource modifierSource) const;

	UFUNCTION(BlueprintPure)
	bool HasPerkFlag(FGameplayTag flag) const;

	UFUNCTION(BlueprintPure)
	bool HasAnyEffectWithID(FName id) const;

	UFUNCTION(BlueprintPure)
	bool HasAnyAddonWithTag(FName tag) const;

	UFUNCTION(BlueprintPure)
	bool HasAllCharacterPerksEquipped() const;

	UFUNCTION(BlueprintPure)
	UStatusEffect* GetStatusEffect(FName id) const;

	UFUNCTION(BlueprintPure)
	UGameplayModifierContainer* GetSourceWithModifier(FGameplayTag type) const;

	UFUNCTION(BlueprintPure)
	UGameplayModifierContainer* GetSourceWithFlag(FGameplayTag flag) const;

	UFUNCTION(BlueprintPure, BlueprintAuthorityOnly)
	TArray<UPerk*> GetPerks() const;

	UFUNCTION(BlueprintPure)
	float GetPerkModifierMinValueAndSource(FGameplayTag type, float startValue, UGameplayModifierContainer*& outSource) const;

	UFUNCTION(BlueprintPure)
	float GetPerkModifierMinValue(FGameplayTag type, float startValue) const;

	UFUNCTION(BlueprintPure)
	float GetPerkModifierMaxValueAndSource(FGameplayTag type, UGameplayModifierContainer*& outSource) const;

	UFUNCTION(BlueprintPure)
	float GetPerkModifierMaxValue(FGameplayTag type) const;

	UFUNCTION(BlueprintPure)
	float GetPerkModifierAdditiveValue(FGameplayTag type, const float baseValue) const;

	UFUNCTION(BlueprintPure)
	float GetPerkModifier(FGameplayTag type) const;

	UFUNCTION(BlueprintPure)
	UPerk* GetPerk(FName id) const;

	UFUNCTION(BlueprintPure)
	float GetMultiplicativeModifierValueWithCompoundNegative(FGameplayTag type) const;

	UFUNCTION(BlueprintPure)
	float GetMultiplicativeModifierValueOfContainerWithCompoundNegative(FGameplayTagContainer container) const;

	UFUNCTION(BlueprintPure)
	float GetMultiplicativeModifierValue(FGameplayTag type) const;

	UFUNCTION(BlueprintPure)
	float GetCompoundedModifierValue(FGameplayTag type) const;

	UFUNCTION(BlueprintPure)
	TArray<UStatusEffect*> GetAllStatusEffectsByID(const FName& id) const;

	UFUNCTION(BlueprintPure)
	TArray<UStatusEffect*> GetAllStatusEffectsByClass(const UClass* type) const;

	UFUNCTION(BlueprintPure)
	TArray<UStatusEffect*> GetAllStatusEffects() const;

	UFUNCTION(BlueprintPure)
	TArray<UGameplayModifierContainer*> GetAllSourcesWithModifier(FGameplayTag type) const;

	UFUNCTION(BlueprintPure)
	TArray<UGameplayModifierContainer*> GetAllSourcesWithFlag(FGameplayTag flag) const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SpawnPerk(FName perkID, int32 perkLevel);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_RemoveStatusEffectByID(FName statusEffectId, bool bRemoveAllWithID);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_RemoveStatusEffect(UStatusEffect* statusEffect);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_RemovePerks();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	UStatusEffect* Authority_ImposeStatusEffectOfClass(TSubclassOf<UStatusEffect> effectClass, ADBDPlayer* originatingPlayer, float customParam, UGameplayModifierContainer* originatingEffect, bool shouldDisplay, float lifetime);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	UStatusEffect* Authority_ImposeStatusEffect_DEPRECATED(FName statusEffectID, ADBDPlayer* originatingPlayer, float customParam, UGameplayModifierContainer* originatingEffect, bool shouldDisplay, float lifetime);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	UStatusEffect* Authority_ImposeNewStatusEffectOrChangeLifeTime_DEPRECATED(FName statusEffectID, ADBDPlayer* originatingPlayer, float lifeTime, float customParam, UGameplayModifierContainer* originatingEffect, bool shouldDisplay);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	UStatusEffect* Authority_ImposeNewStatusEffectOfClassOrChangeLifeTime(TSubclassOf<UStatusEffect> effectClass, ADBDPlayer* originatingPlayer, float lifeTime, float customParam, UGameplayModifierContainer* originatingEffect, bool shouldDisplay);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	UStatusEffect* Authority_ImposeDynamicStatusEffect_DEPRECATED(FName statusEffectID, ADBDPlayer* originatingPlayer, float customParam, UGameplayModifierContainer* originatingEffect);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_EndStatusEffectByID(FName statusEffectId, bool bRemoveAllWithID);

public:
	UPerkManager();
};

FORCEINLINE uint32 GetTypeHash(const UPerkManager) { return 0; }
