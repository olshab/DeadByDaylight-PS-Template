#pragma once

#include "CoreMinimal.h"
#include "StoreFeaturedBannerData.h"
#include "StoreFeaturedBannerUIData.generated.h"

USTRUCT()
struct FStoreFeaturedBannerUIData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FName BannerId;

	UPROPERTY()
	FStoreFeaturedBannerData BannerData;

	UPROPERTY()
	bool IsNew;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedBannerUIData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedBannerUIData) { return 0; }
