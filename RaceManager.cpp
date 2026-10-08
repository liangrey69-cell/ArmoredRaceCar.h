#include "RaceManager.h"
#include "ArmoredRaceCar.h"

ARaceManager::ARaceManager()
{
    PrimaryActorTick.bCanEverTick = true;

    TotalRacers = 20;
    AIRacers = 19;
    TotalLaps = 3;

    CurrentLap = 1;
    bRaceStarted = false;
    bRaceFinished = false;
}

void ARaceManager::BeginPlay()
{
    Super::BeginPlay();

    CurrentLap = 1;
    bRaceStarted = false;
    bRaceFinished = false;
}

void ARaceManager::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ARaceManager::StartRace()
{
    if (bRaceStarted)
    {
        return;
    }

    bRaceStarted = true;
    CurrentLap = 1;

    UE_LOG(LogTemp, Warning, TEXT("ARMORED RUSH RACE STARTED!"));
    UE_LOG(LogTemp, Warning, TEXT("20 racers: 1 Player + 19 AI"));
}

void ARaceManager::AdvanceLap()
{
    if (!bRaceStarted || bRaceFinished)
    {
        return;
    }

    CurrentLap++;

    if (CurrentLap > TotalLaps)
    {
        FinishRace();
        return;
    }

    UE_LOG(
        LogTemp,
        Warning,
        TEXT("Lap %d of %d"),
        CurrentLap,
        TotalLaps
    );
}

void ARaceManager::FinishRace()
{
    bRaceFinished = true;

    UE_LOG(
        LogTemp,
        Warning,
        TEXT("RACE FINISHED! Final lap: %d"),
        CurrentLap
    );
}

void ARaceManager::RegisterRacer(AArmoredRaceCar* Racer)
{
    if (Racer && !Racers.Contains(Racer))
    {
        Racers.Add(Racer);

        UE_LOG(
            LogTemp,
            Warning,
            TEXT("Racer registered. Total racers: %d"),
            Racers.Num()
        );
    }
}
