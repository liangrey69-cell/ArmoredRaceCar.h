#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArmoredNitroSystem.generated.h"

class AArmoredRaceCar;

UCLASS(Blueprintable)
class ARMOREDRUSH_API UArmoredNitroSystem : public UObject
{
    GENERATED_BODY()

public:

    // Nitro speed multiplier
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nitro")
    float NitroMultiplier = 2.0f;

    // Nitro duration
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Nitro")
    float NitroDuration = 3.0f;

    // Activate nitro
    UFUNCTION(BlueprintCallable, Category = "Nitro")
    void ActivateNitro(AArmoredRaceCar* Car);
};
