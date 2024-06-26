#include "DiscordancePerk.h"
#include "Net/UnrealNetwork.h"

class AGenerator;

void UDiscordancePerk::Multicast_AddLingeringGeneratorAura_Implementation(AGenerator* generator)
{

}

void UDiscordancePerk::Multicast_AddGeneratorAura_Implementation(AGenerator* generator)
{

}

void UDiscordancePerk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDiscordancePerk, _isPerkConsideredActive);
}

UDiscordancePerk::UDiscordancePerk()
{
	this->_generatorQueryHandlePairs = TArray<FGeneratorQueryHandlePair>();
	this->_effectRange = 0.000000;
	this->_auraLingerDuration = 8.000000;
	this->_numSurvivorsRepairingToReveal = 2;
	this->_isPerkConsideredActive = false;
}
