#pragma once

#include "CoreMinimal.h"
#include "AkGroupValue.h"
#include "AkStateValue.generated.h"

UCLASS()
class AKAUDIO_API UAkStateValue : public UAkGroupValue
{
	GENERATED_BODY()

public:
	UAkStateValue();
};

FORCEINLINE uint32 GetTypeHash(const UAkStateValue) { return 0; }
