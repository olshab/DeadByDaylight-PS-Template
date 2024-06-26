#pragma once

#include "CoreMinimal.h"
#include "GenerateStoreCustomizationExclusionFileCommandlet_Base.h"
#include "GenerateStoreCustomizationExclusionFileCommandlet_KrakenCatalog.generated.h"

UCLASS()
class UGenerateStoreCustomizationExclusionFileCommandlet_KrakenCatalog : public UGenerateStoreCustomizationExclusionFileCommandlet_Base
{
	GENERATED_BODY()

public:
	UGenerateStoreCustomizationExclusionFileCommandlet_KrakenCatalog();
};

FORCEINLINE uint32 GetTypeHash(const UGenerateStoreCustomizationExclusionFileCommandlet_KrakenCatalog) { return 0; }
