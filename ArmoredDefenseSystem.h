#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArmoredDefenseSystem.generated.h"

class AArmoredRaceCar;

UCLASS(Blueprintable)
class ARMOREDRUSH_API UArmoredDefenseSystem : public UObject
{
    GENERATED_BODY()

public:

    // Shield duration in seconds
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shield")
    float ShieldDuration = 5.0f;

    // Amount repaired by the fixer
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Fixer")
    float FixerRepairAmount = 50.0f;

    // Activate shield
    UFUNCTION(BlueprintCallable, Category = "Defense")
    void ActivateShield(AArmoredRaceCar* Car);

    // Repair car
    UFUNCTION(BlueprintCallable, Category = "Defense")
    void ActivateFixer(AArmoredRaceCar* Car);
};
