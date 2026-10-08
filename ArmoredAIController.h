#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ArmoredAIController.generated.h"

UCLASS()
class ARMOREDRUSH_API AArmoredAIController : public AAIController
{
    GENERATED_BODY()

public:

    AArmoredAIController();

protected:

    virtual void BeginPlay() override;

public:

    virtual void Tick(float DeltaTime) override;

    // AI skill level
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float AISkill = 0.75f;

    // Maximum driving speed
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float MaxAISpeed = 1000.0f;

    // How aggressive the AI is with weapons
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
    float WeaponAggression = 0.5f;

    // Start racing
    UFUNCTION(BlueprintCallable, Category = "AI")
    void StartAIRacing();

    // Use weapons
    UFUNCTION(BlueprintCallable, Category = "AI")
    void UseAIWeapon();
};
