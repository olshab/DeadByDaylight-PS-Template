#include "DecoySlasherComponent.h"
#include "UObject/NoExportTypes.h"
#include "TerrorRadiusEmitterComponent.h"

class ASlasherPlayer;

void UDecoySlasherComponent::SetDecoyIsActive(bool isActive, const FVector& location, const FRotator& rotation, bool visibleRedGlow)
{

}

void UDecoySlasherComponent::OnRealSlasherTerrorRadiusChanged(float newValue)
{

}

bool UDecoySlasherComponent::IsDecoyActive() const
{
	return false;
}

UTerrorRadiusEmitterComponent* UDecoySlasherComponent::GetTerrorRadiusEmitter() const
{
	return NULL;
}

ASlasherPlayer* UDecoySlasherComponent::GetRealSlasher() const
{
	return NULL;
}

void UDecoySlasherComponent::DoPostVFXUpdates(const FVector& location, const FRotator& rotation)
{

}

void UDecoySlasherComponent::CopyCustomizationFromSlasher()
{

}

UDecoySlasherComponent::UDecoySlasherComponent()
{
	this->HasTerrorRadius = true;
	this->HasRedGlow = true;
	this->_isActive = false;
	this->_initialized = false;
	this->_terrorRadiusEmitter = CreateDefaultSubobject<UTerrorRadiusEmitterComponent>(TEXT("Terror Radius Component"));
	this->_redStainComponent = NULL;
}
