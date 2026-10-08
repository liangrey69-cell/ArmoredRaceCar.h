#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ArmoredPlayerController.generated.h"

UCLASS()
class ARMOREDRUSH_API AArmoredPlayerController : public APlayerController
{
    GENERATED_BODY()

public:

    AArmoredPlayerController();

protected:

    virtual void BeginPlay() override;
    virtual void SetupInputComponent() override;

public:

    // Driving
    UFUNCTION(BlueprintCallable, Category = "Driving")
    void Accelerate(float Value);

    UFUNCTION(BlueprintCallable, Category = "Driving")
    void Steer(float Value);

    UFUNCTION(BlueprintCallable, Category = "Driving")
    void Brake();

    // Combat
    UFUNCTION(BlueprintCallable, Category = "Combat")
    void UseBullet();

    UFUNCTION(BlueprintCallable, Category = "Combat")
    void UseRocket();

    UFUNCTION(BlueprintCallable, Category = "Combat")
    void UseExplosiveTrap();

    // Abilities
    UFUNCTION(BlueprintCallable, Category = "Abilities")
    void UseShield();

    UFUNCTION(BlueprintCallable, Category = "Abilities")
    void UseFixer();

    UFUNCTION(BlueprintCallable, Category = "Abilities")
    void UseNitro();

private:

    float ThrottleInput = 0.0f;
    float SteeringInput = 0.0f;
};
