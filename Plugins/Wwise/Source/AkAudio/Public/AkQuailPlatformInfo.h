#pragma once

#include "CoreMinimal.h"
#include "AkStadiaPlatformInfo.h"
#include "AkQuailPlatformInfo.generated.h"

UCLASS()
class UAkQuailPlatformInfo : public UAkStadiaPlatformInfo
{
	GENERATED_BODY()

public:
	UAkQuailPlatformInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkQuailPlatformInfo) { return 0; }
