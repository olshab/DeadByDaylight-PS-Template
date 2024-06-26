#pragma once

#include "CoreMinimal.h"
#include "RespawnableStrategy.h"
#include "RespawnFurthestFromPlayersStrategy.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class SPECIALEVENTUTILITIES_API URespawnFurthestFromPlayersStrategy : public URespawnableStrategy
{
	GENERATED_BODY()

public:
	URespawnFurthestFromPlayersStrategy();
};

FORCEINLINE uint32 GetTypeHash(const URespawnFurthestFromPlayersStrategy) { return 0; }
