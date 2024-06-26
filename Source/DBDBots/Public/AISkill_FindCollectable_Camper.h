#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindCollectable.h"
#include "AISkill_FindCollectable_Camper.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_FindCollectable_Camper : public UAISkill_FindCollectable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float CollectUnderItemWeight;

	UPROPERTY(EditDefaultsOnly)
	float CollectOverWeightRatioDifference;

public:
	UAISkill_FindCollectable_Camper();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindCollectable_Camper) { return 0; }
