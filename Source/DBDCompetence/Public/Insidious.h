#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Insidious.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UInsidious : public UPerk
{
	GENERATED_BODY()

public:
	UInsidious();
};

FORCEINLINE uint32 GetTypeHash(const UInsidious) { return 0; }
