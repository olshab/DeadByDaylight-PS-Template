#include "GameplayElementsPopulation.h"

FGameplayElementsPopulation::FGameplayElementsPopulation()
{
	this->Type = EGameplayElementType::Generic;
	this->GameplayElementBlueprint = NULL;
	this->MinPopulation = 0;
	this->MaxPopulation = 0;
	this->MinGuaranteePopulation = 0;
	this->SpawnPass = 0;
	this->IterativeWeightAdjustmentStrategyClass = NULL;
}
