#pragma once

#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "AccountLinkPopupScreen.generated.h"

UCLASS()
class UAccountLinkPopupScreen : public UGenericPopupScreen
{
	GENERATED_BODY()

public:
	UAccountLinkPopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UAccountLinkPopupScreen) { return 0; }
