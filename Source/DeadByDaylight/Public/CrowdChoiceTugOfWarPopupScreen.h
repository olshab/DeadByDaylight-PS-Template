#pragma once

#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "CrowdChoiceTugOfWarPopupScreen.generated.h"

UCLASS()
class UCrowdChoiceTugOfWarPopupScreen : public UGenericPopupScreen
{
	GENERATED_BODY()

public:
	UCrowdChoiceTugOfWarPopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UCrowdChoiceTugOfWarPopupScreen) { return 0; }
