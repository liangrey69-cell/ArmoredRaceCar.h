#include "ArmoredRespawnSystem.h"
#include "ArmoredRaceCar.h"

void UArmoredRespawnSystem::RespawnCar(AArmoredRaceCar* Car)
{
    if (!Car)
    {
        return;
    }

    Car->RespawnCar();

    UE_LOG(
        LogTemp,
        Warning,
        TEXT("Car respawned! Protection active for %.1f seconds."),
        RespawnProtectionTime
    );
}
