#pragma once

#include "CoreMinimal.h"
#include "PS4GRDKBaseProfileDAL.h"
#include "StadiaProfileDAL.generated.h"

UCLASS()
class UStadiaProfileDAL : public UPS4GRDKBaseProfileDAL
{
	GENERATED_BODY()

public:
	UStadiaProfileDAL();
};

FORCEINLINE uint32 GetTypeHash(const UStadiaProfileDAL) { return 0; }
