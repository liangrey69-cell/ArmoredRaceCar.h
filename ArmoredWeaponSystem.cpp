#include "ArmoredWeaponSystem.h"
#include "ArmoredRaceCar.h"

void UArmoredWeaponSystem::ApplyBulletDamage(AArmoredRaceCar* TargetCar)
{
    if (TargetCar)
    {
        TargetCar->TakeDamage(BulletDamage);
    }
}

void UArmoredWeaponSystem::ApplyRocketDamage(AArmoredRaceCar* TargetCar)
{
    if (TargetCar)
    {
        TargetCar->TakeDamage(RocketDamage);
    }
}

void UArmoredWeaponSystem::ApplyTrapDamage(AArmoredRaceCar* TargetCar)
{
    if (TargetCar)
    {
        TargetCar->TakeDamage(TrapDamage);
    }
}
