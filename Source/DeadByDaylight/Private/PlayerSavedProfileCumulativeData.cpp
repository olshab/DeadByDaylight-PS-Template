#include "PlayerSavedProfileCumulativeData.h"

FPlayerSavedProfileCumulativeData::FPlayerSavedProfileCumulativeData()
{
	this->FirstTimePlaying = false;
	this->CumulativeMatches = 0;
	this->CumulativeMatchesAsSurvivor = 0;
	this->CumulativeMatchesAsKiller = 0;
	this->CumulativeMatchesAsSurvivorNoFriends = 0;
	this->CumulativeMatchesAsKillerNoFriends = 0;
	this->LastMatchTimestamp = FDateTime{};
	this->LastSessionTimestamp = FDateTime{};
	this->CumulativeSessions = 0;
	this->CumulativePlaytime = FTimespan{};
}
