#include "CinematicManager.h"
#include "Cinematic.h"

void UCinematicManager::PlaySingle(const FCinematic& cinematic)
{

}

void UCinematicManager::PlayMultiple(const TArray<FCinematic>& cinematics)
{

}

bool UCinematicManager::HasCinematicToPlay() const
{
	return false;
}

FCinematic UCinematicManager::GetNextCinematicToPlay()
{
	return FCinematic{};
}

void UCinematicManager::CancelAllCinematicToPlay()
{

}

UCinematicManager::UCinematicManager()
{
	this->_cinematicQueue = TArray<FCinematic>();
}
