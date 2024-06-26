#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GeneratorUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UGeneratorUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UGeneratorUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorUtilities) { return 0; }
