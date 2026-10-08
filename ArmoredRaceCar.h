#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ArmoredRaceCar.generated.h"

UCLASS()
class ARMOREDRUSH_API AArmoredRaceCar : public APawn
{
    GENERATED_BODY()

public:

    AArmoredRaceCar();

protected:

    virtual void BeginPlay() override;

public:

    virtual void Tick(float DeltaTime) override;

    // Car Health
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Car Health")
    float MaxHealth = 100.0f;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Car Health")
    float CurrentHealth = 100.0f;

    // Damage
    UFUNCTION(BlueprintCallable, Category = "Combat")
    void TakeDamage(float DamageAmount);

    UFUNCTION(BlueprintCallable, Category = "Combat")
    void RepairCar(float RepairAmount);

    // Health States
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Car Health")
    bool bIsSmoking = false;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Car Health")
    bool bIsDestroyed = false;

    // Respawn
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Respawn")
    float RespawnDelay = 3.0f;

    UFUNCTION(BlueprintCallable, Category = "Respawn")
    void RespawnCar();

    // Weapons
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
    int32 Bullets = 3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
    int32 Rockets = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
    int32 ExplosiveTraps = 1;

    // Special Items
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    bool bHasShield = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    bool bHasFixer = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    bool bHasNitro = false;

    // Weapons
    UFUNCTION(BlueprintCallable, Category = "Weapons")
    void FireBullet();

    UFUNCTION(BlueprintCallable, Category = "Weapons")
    void FireRocket();

    UFUNCTION(BlueprintCallable, Category = "Weapons")
    void DeployExplosiveTrap();

    // Special Abilities
    UFUNCTION(BlueprintCallable, Category = "Abilities")
    void ActivateShield();

    UFUNCTION(BlueprintCallable, Category = "Abilities")
    void ActivateFixer();

    UFUNCTION(BlueprintCallable, Category = "Abilities")
    void ActivateNitro();
};
