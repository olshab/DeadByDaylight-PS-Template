#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "WeddingRing.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UWeddingRing : public UItemAddon
{
	GENERATED_BODY()

public:
	UWeddingRing();
};

FORCEINLINE uint32 GetTypeHash(const UWeddingRing) { return 0; }
