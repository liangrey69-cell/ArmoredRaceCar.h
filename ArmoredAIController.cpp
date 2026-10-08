#include "ArmoredAIController.h"

AArmoredAIController::AArmoredAIController()
{
    PrimaryActorTick.bCanEverTick = true;

    AISkill = 0.75f;
    MaxAISpeed = 1000.0f;
    WeaponAggression = 0.5f;
}

void AArmoredAIController::BeginPlay()
{
    Super::BeginPlay();

    StartAIRacing();
}

void AArmoredAIController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // AI driving and combat will be connected
    // to the actual vehicle system in Unreal.
}

void AArmoredAIController::StartAIRacing()
{
    UE_LOG(
        LogTemp,
        Warning,
        TEXT("Armored AI racer started. Skill: %.2f"),
        AISkill
    );
}

void AArmoredAIController::UseAIWeapon()
{
    UE_LOG(
        LogTemp,
        Warning,
        TEXT("AI is evaluating weapon usage.")
    );
}
