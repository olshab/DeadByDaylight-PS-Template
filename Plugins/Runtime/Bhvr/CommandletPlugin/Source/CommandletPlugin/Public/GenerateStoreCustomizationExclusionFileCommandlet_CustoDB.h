#pragma once

#include "CoreMinimal.h"
#include "GenerateStoreCustomizationExclusionFileCommandlet_Base.h"
#include "GenerateStoreCustomizationExclusionFileCommandlet_CustoDB.generated.h"

UCLASS()
class UGenerateStoreCustomizationExclusionFileCommandlet_CustoDB : public UGenerateStoreCustomizationExclusionFileCommandlet_Base
{
	GENERATED_BODY()

public:
	UGenerateStoreCustomizationExclusionFileCommandlet_CustoDB();
};

FORCEINLINE uint32 GetTypeHash(const UGenerateStoreCustomizationExclusionFileCommandlet_CustoDB) { return 0; }
