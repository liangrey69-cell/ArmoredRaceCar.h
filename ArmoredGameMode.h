#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ArmoredGameMode.generated.h"

class ARaceManager;
class AArmoredRaceCar;

UCLASS()
class ARMOREDRUSH_API AArmoredGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:

    AArmoredGameMode();

protected:

    virtual void BeginPlay() override;

public:

    // Race settings
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Race")
    int32 PlayerCount = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Race")
    int32 AICount = 19;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Race")
    int32 TotalRacers = 20;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Race")
    int32 TotalLaps = 3;

    // Race manager
    UPROPERTY(BlueprintReadOnly, Category = "Race")
    ARaceManager* RaceManager;

    // Start game
    UFUNCTION(BlueprintCallable, Category = "Game")
    void StartArmoredRace();

    // End game
    UFUNCTION(BlueprintCallable, Category = "Game")
    void EndArmoredRace();
};
