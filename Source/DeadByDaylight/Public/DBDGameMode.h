#pragma once

#include "CoreMinimal.h"
#include "DBDBaseMatchGameMode.h"
#include "OnPlayersLoadoutsCreated.h"
#include "Templates/SubclassOf.h"
#include "EGameState.h"
#include "DBDGameMode.generated.h"

class APlayerState;
class ADBDPlayerState;
class APlayerController;
class APlayerStart;

UCLASS(NonTransient)
class DEADBYDAYLIGHT_API ADBDGameMode : public ADBDBaseMatchGameMode
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintAssignable)
	FOnPlayersLoadoutsCreated OnPlayersLoadoutsCreated;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear)
	TSubclassOf<APlayerController> _killerPlayerControllerClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear)
	TSubclassOf<APlayerController> _survivorPlayerControllerClass;

	UPROPERTY()
	TArray<APlayerStart*> _initialPlayerStarts;

private:
	UPROPERTY(EditAnywhere)
	int32 KillerCreationPositionOrder;

protected:
	UFUNCTION(BlueprintCallable)
	void SetPlayerCount(int32 playerAmount);

public:
	UFUNCTION(BlueprintCallable)
	void SetEscapeOpened(bool val);

	UFUNCTION()
	void RegisterOnPlayerStateChanged(APlayerState* playerState);

	UFUNCTION()
	void OnPlayerGameStateChanged(ADBDPlayerState* playerState, EGameState playerGameState);

protected:
	UFUNCTION(BlueprintCallable)
	void LevelLoaded(const FString& levelName);

public:
	UFUNCTION(BlueprintPure)
	bool IsEscapeOpen() const;

protected:
	UFUNCTION(BlueprintCallable)
	void InitializeEscapeRequirements();

	UFUNCTION(BlueprintCallable)
	void HostGame();

	UFUNCTION(Exec)
	void DBD_BlockCamperEscape(bool shouldBlock);

	UFUNCTION(BlueprintPure)
	bool AreLoadoutsCreated() const;

public:
	ADBDGameMode();
};

FORCEINLINE uint32 GetTypeHash(const ADBDGameMode) { return 0; }
