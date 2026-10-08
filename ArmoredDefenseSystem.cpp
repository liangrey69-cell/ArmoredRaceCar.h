#include "ArmoredDefenseSystem.h"
#include "ArmoredRaceCar.h"

void UArmoredDefenseSystem::ActivateShield(AArmoredRaceCar* Car)
{
    if (!Car)
    {
        return;
    }

    if (Car->bHasShield)
    {
        Car->ActivateShield();

        UE_LOG(
            LogTemp,
            Warning,
            TEXT("Shield activated for %.1f seconds."),
            ShieldDuration
        );
    }
}

void UArmoredDefenseSystem::ActivateFixer(AArmoredRaceCar* Car)
{
    if (!Car)
    {
        return;
    }

    if (Car->bHasFixer)
    {
        Car->ActivateFixer();

        UE_LOG(
            LogTemp,
            Warning,
            TEXT("Fixer activated. Car repaired by %.1f%%."),
            FixerRepairAmount
        );
    }
}
