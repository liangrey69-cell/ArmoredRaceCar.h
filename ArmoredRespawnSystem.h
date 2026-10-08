#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArmoredRespawnSystem.generated.h"

class AArmoredRaceCar;

UCLASS(Blueprintable)
class ARMOREDRUSH_API UArmoredRespawnSystem : public UObject
{
    GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Respawn")
    float RespawnDelay = 3.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Respawn")
    float RespawnProtectionTime = 2.0f;

    UFUNCTION(BlueprintCallable, Category = "Respawn")
    void RespawnCar(AArmoredRaceCar* Car);
};
