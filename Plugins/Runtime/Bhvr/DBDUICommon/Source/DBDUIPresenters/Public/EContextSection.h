#pragma once

#include "CoreMinimal.h"
#include "EContextSection.generated.h"

UENUM(BlueprintType)
enum class EContextSection : uint8
{
	None,
	Hud,
	MainMenu,
	Lobby,
	Store,
	Tally,
	Archive,
	Credits,
	Onboarding,
	Popups,
	LightSensitivity,
};
