#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WeaponInventory.generated.h"

UENUM(BlueprintType)
enum class EArmoredWeapon : uint8
{
    Bullet,
    Rocket,
    ExplosiveTrap,
    Shield,
    Fixer,
    Nitro
};

UCLASS(Blueprintable)
class ARMOREDRUSH_API UWeaponInventory : public UObject
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
    int32 Bullets = 3;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
    int32 Rockets = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapons")
    int32 ExplosiveTraps = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    bool bHasShield = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    bool bHasFixer = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities")
    bool bHasNitro = false;

    UFUNCTION(BlueprintCallable, Category = "Weapons")
    bool UseWeapon(EArmoredWeapon Weapon);

    UFUNCTION(BlueprintCallable, Category = "Weapons")
    int32 GetWeaponCount(EArmoredWeapon Weapon) const;
};
