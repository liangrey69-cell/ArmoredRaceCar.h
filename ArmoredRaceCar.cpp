#include "ArmoredRaceCar.h"
#include "TimerManager.h"

AArmoredRaceCar::AArmoredRaceCar()
{
    PrimaryActorTick.bCanEverTick = true;

    MaxHealth = 100.0f;
    CurrentHealth = MaxHealth;

    Bullets = 3;
    Rockets = 1;
    ExplosiveTraps = 1;

    bHasShield = false;
    bHasFixer = false;
    bHasNitro = false;
}

void AArmoredRaceCar::BeginPlay()
{
    Super::BeginPlay();

    CurrentHealth = MaxHealth;
}

void AArmoredRaceCar::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AArmoredRaceCar::TakeDamage(float DamageAmount)
{
    if (bIsDestroyed || DamageAmount <= 0.0f)
    {
        return;
    }

    CurrentHealth -= DamageAmount;
    CurrentHealth = FMath::Clamp(CurrentHealth, 0.0f, MaxHealth);

    // Smoke starts when health reaches 50%
    if (CurrentHealth <= 50.0f)
    {
        bIsSmoking = true;
    }

    // Car destroyed at 0%
    if (CurrentHealth <= 0.0f)
    {
        bIsDestroyed = true;

        GetWorldTimerManager().SetTimer(
            FTimerHandle(),
            this,
            &AArmoredRaceCar::RespawnCar,
            RespawnDelay,
            false
        );
    }
}

void AArmoredRaceCar::RepairCar(float RepairAmount)
{
    if (bIsDestroyed || RepairAmount <= 0.0f)
    {
        return;
    }

    CurrentHealth += RepairAmount;
    CurrentHealth = FMath::Clamp(CurrentHealth, 0.0f, MaxHealth);

    if (CurrentHealth > 50.0f)
    {
        bIsSmoking = false;
    }
}

void AArmoredRaceCar::RespawnCar()
{
    CurrentHealth = MaxHealth;

    bIsDestroyed = false;
    bIsSmoking = false;

    UE_LOG(LogTemp, Warning, TEXT("Armored car respawned with 100%% health."));
}

void AArmoredRaceCar::FireBullet()
{
    if (Bullets > 0)
    {
        Bullets--;

        UE_LOG(LogTemp, Warning, TEXT("Bullet fired! 10%% damage."));
    }
}

void AArmoredRaceCar::FireRocket()
{
    if (Rockets > 0)
    {
        Rockets--;

        UE_LOG(LogTemp, Warning, TEXT("Rocket fired! 30%% damage."));
    }
}

void AArmoredRaceCar::DeployExplosiveTrap()
{
    if (ExplosiveTraps > 0)
    {
        ExplosiveTraps--;

        UE_LOG(LogTemp, Warning, TEXT("Explosive trap deployed! 30%% damage."));
    }
}

void AArmoredRaceCar::ActivateShield()
{
    if (bHasShield)
    {
        bHasShield = false;

        UE_LOG(LogTemp, Warning, TEXT("Shield activated!"));
    }
}

void AArmoredRaceCar::ActivateFixer()
{
    if (bHasFixer)
    {
        bHasFixer = false;

        RepairCar(50.0f);

        UE_LOG(LogTemp, Warning, TEXT("Fixer activated! Car repaired."));
    }
}

void AArmoredRaceCar::ActivateNitro()
{
    if (bHasNitro)
    {
        bHasNitro = false;

        UE_LOG(LogTemp, Warning, TEXT("Nitro activated!"));
    }
}
