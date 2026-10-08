#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RaceManager.generated.h"

class AArmoredRaceCar;

UCLASS()
class ARMOREDRUSH_API ARaceManager : public AActor
{
    GENERATED_BODY()

public:

    ARaceManager();

protected:

    virtual void BeginPlay() override;

public:

    virtual void Tick(float DeltaTime) override;

    // Total racers
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Race")
    int32 TotalRacers = 20;

    // Number of AI racers
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Race")
    int32 AIRacers = 19;

    // Number of laps
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Race")
    int32 TotalLaps = 3;

    // Current race lap
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Race")
    int32 CurrentLap = 1;

    // Race status
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Race")
    bool bRaceStarted = false;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Race")
    bool bRaceFinished = false;

    // Start race
    UFUNCTION(BlueprintCallable, Category = "Race")
    void StartRace();

    // Finish race
    UFUNCTION(BlueprintCallable, Category = "Race")
    void FinishRace();

    // Advance lap
    UFUNCTION(BlueprintCallable, Category = "Race")
    void AdvanceLap();

    // Register a racer
    UFUNCTION(BlueprintCallable, Category = "Race")
    void RegisterRacer(AArmoredRaceCar* Racer);

private:

    UPROPERTY()
    TArray<AArmoredRaceCar*> Racers;
};
