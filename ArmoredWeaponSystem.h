#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArmoredWeaponSystem.generated.h"

class AArmoredRaceCar;

UCLASS(Blueprintable)
class ARMOREDRUSH_API UArmoredWeaponSystem : public UObject
{
    GENERATED_BODY()

public:

    // Bullet damage
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
    float BulletDamage = 10.0f;

    // Rocket damage
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
    float RocketDamage = 30.0f;

    // Explosive trap damage
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
    float TrapDamage = 30.0f;

    // Apply bullet damage
    UFUNCTION(BlueprintCallable, Category = "Weapons")
    void ApplyBulletDamage(AArmoredRaceCar* TargetCar);

    // Apply rocket damage
    UFUNCTION(BlueprintCallable, Category = "Weapons")
    void ApplyRocketDamage(AArmoredRaceCar* TargetCar);

    // Apply explosive trap damage
    UFUNCTION(BlueprintCallable, Category = "Weapons")
    void ApplyTrapDamage(AArmoredRaceCar* TargetCar);
};
