#include "ArmoredGameMode.h"
#include "RaceManager.h"

AArmoredGameMode::AArmoredGameMode()
{
    PlayerCount = 1;
    AICount = 19;
    TotalRacers = 20;
    TotalLaps = 3;

    RaceManager = nullptr;
}

void AArmoredGameMode::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(
        LogTemp,
        Warning,
        TEXT("ARMORED RUSH INITIALIZED: 1 Player + 19 AI.")
    );

    UE_LOG(
        LogTemp,
        Warning,
        TEXT("Total racers: %d | Laps: %d"),
        TotalRacers,
        TotalLaps
    );
}

void AArmoredGameMode::StartArmoredRace()
{
    if (RaceManager)
    {
        RaceManager->StartRace();
    }
    else
    {
        UE_LOG(
            LogTemp,
            Warning,
            TEXT("Race Manager has not been assigned yet.")
        );
    }
}

void AArmoredGameMode::EndArmoredRace()
{
    if (RaceManager)
    {
        RaceManager->FinishRace();
    }

    UE_LOG(
        LogTemp,
        Warning,
        TEXT("ARMORED RUSH RACE ENDED.")
    );
}
