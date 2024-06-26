#pragma once

#include "CoreMinimal.h"
#include "EContextualType.generated.h"

UENUM(BlueprintType)
enum class EContextualType : uint8
{
	None,
	RedGlyph,
	BlueGlyph,
	YellowGlyph,
	PurpleGlyph,
	IceBlueGlyph,
	GreenGlyph,
	OrangeGlyph,
	PinkGlyph,
	GlyphUpperBound,
	ToxinPlantHalloween2020,
	PumpkinHalloween2021,
};
