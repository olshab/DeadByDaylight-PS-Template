#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "NearPalletVaultWallQEEvaluator.generated.h"

UCLASS()
class UNearPalletVaultWallQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UNearPalletVaultWallQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UNearPalletVaultWallQEEvaluator) { return 0; }
