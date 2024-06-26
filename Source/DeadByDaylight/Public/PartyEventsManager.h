#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PartyEventsManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UPartyEventsManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPartyEventsManager();
};

FORCEINLINE uint32 GetTypeHash(const UPartyEventsManager) { return 0; }
