#pragma once

#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "EventEntryPopupScreen.generated.h"

UCLASS()
class UEventEntryPopupScreen : public UGenericPopupScreen
{
	GENERATED_BODY()

public:
	UEventEntryPopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryPopupScreen) { return 0; }
