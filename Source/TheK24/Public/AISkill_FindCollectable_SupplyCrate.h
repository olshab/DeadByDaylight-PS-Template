#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindCollectable_Searchable.h"
#include "AITunableParameter.h"
#include "AISkill_FindCollectable_SupplyCrate.generated.h"

UCLASS(EditInlineNew)
class UAISkill_FindCollectable_SupplyCrate : public UAISkill_FindCollectable_Searchable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter UrgencyGoalWeight;

public:
	UAISkill_FindCollectable_SupplyCrate();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindCollectable_SupplyCrate) { return 0; }
