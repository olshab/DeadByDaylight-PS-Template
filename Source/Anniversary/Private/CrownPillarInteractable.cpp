#include "CrownPillarInteractable.h"
#include "NearTrackedActorComponent.h"
#include "ChargeableComponent.h"
#include "CrownPickupInteraction.h"
#include "Components/StaticMeshComponent.h"
#include "DBDOutlineComponent.h"
#include "Components/BoxComponent.h"
#include "CrownPillarOutlineUpdateStrategy.h"
#include "Interactor.h"

void ACrownPillarInteractable::Local_OnIntroCompleted()
{

}

bool ACrownPillarInteractable::IsLocallyObservedPlayerEquippedWithAnniversaryOffering() const
{
	return false;
}

ACrownPillarInteractable::ACrownPillarInteractable()
{
	this->_anniversaryOfferingTag = NAME_None;
	this->_crownPillarInteraction = CreateDefaultSubobject<UCrownPickupInteraction>(TEXT("CrownPillarInteraction"));
	this->_crownPillarInteractionKiller = CreateDefaultSubobject<UCrownPickupInteraction>(TEXT("CrownPillarInteractionKiller"));
	this->_crownPillarInteractionChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("CrownPillarInteractionChargeable"));
	this->_crownPillarInteractionChargeableKiller = CreateDefaultSubobject<UChargeableComponent>(TEXT("CrownPillarInteractionChargeableKiller"));
	this->_crownPillarInteractor = CreateDefaultSubobject<UInteractor>(TEXT("CrownPillarInteractor"));
	this->_crownPillarInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("CrownPillarInteractionZone"));
	this->_crownPillarStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CrownPillarStaticMesh"));
	this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("OutlineComponent"));
	this->_nearTrackedActorComponent = CreateDefaultSubobject<UNearTrackedActorComponent>(TEXT("NearPlayerTracker"));
	this->_crownPillarOutlineUpdateStrategy = CreateDefaultSubobject<UCrownPillarOutlineUpdateStrategy>(TEXT("CrownPillarOutlineUpdateStrategy"));
}
