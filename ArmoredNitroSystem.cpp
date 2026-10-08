#include "ArmoredNitroSystem.h"
#include "ArmoredRaceCar.h"

void UArmoredNitroSystem::ActivateNitro(AArmoredRaceCar* Car)
{
    if (!Car)
    {
        return;
    }

    if (!Car->bHasNitro)
    {
        return;
    }

    Car->ActivateNitro();

    UE_LOG(
        LogTemp,
        Warning,
        TEXT("Nitro activated! Speed multiplier: %.1fx for %.1f seconds."),
        NitroMultiplier,
        NitroDuration
    );
}
