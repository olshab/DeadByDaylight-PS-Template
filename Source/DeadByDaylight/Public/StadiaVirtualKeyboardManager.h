#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "StadiaVirtualKeyboardManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UStadiaVirtualKeyboardManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UStadiaVirtualKeyboardManager();
};

FORCEINLINE uint32 GetTypeHash(const UStadiaVirtualKeyboardManager) { return 0; }
