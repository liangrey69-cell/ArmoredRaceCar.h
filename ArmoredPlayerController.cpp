#include "ArmoredPlayerController.h"

AArmoredPlayerController::AArmoredPlayerController()
{
    ThrottleInput = 0.0f;
    SteeringInput = 0.0f;
}

void AArmoredPlayerController::BeginPlay()
{
    Super::BeginPlay();

    UE_LOG(LogTemp, Warning, TEXT("Armored Rush player controller ready."));
}

void AArmoredPlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    // Actual Enhanced Input bindings will be connected
    // in the Unreal Engine project.
}

void AArmoredPlayerController::Accelerate(float Value)
{
    ThrottleInput = FMath::Clamp(Value, -1.0f, 1.0f);
}

void AArmoredPlayerController::Steer(float Value)
{
    SteeringInput = FMath::Clamp(Value, -1.0f, 1.0f);
}

void AArmoredPlayerController::Brake()
{
    ThrottleInput = 0.0f;

    UE_LOG(LogTemp, Warning, TEXT("Brake activated."));
}

void AArmoredPlayerController::UseBullet()
{
    UE_LOG(LogTemp, Warning, TEXT("Player selected bullet."));
}

void AArmoredPlayerController::UseRocket()
{
    UE_LOG(LogTemp, Warning, TEXT("Player selected rocket."));
}

void AArmoredPlayerController::UseExplosiveTrap()
{
    UE_LOG(LogTemp, Warning, TEXT("Player selected explosive trap."));
}

void AArmoredPlayerController::UseShield()
{
    UE_LOG(LogTemp, Warning, TEXT("Player selected shield."));
}

void AArmoredPlayerController::UseFixer()
{
    UE_LOG(LogTemp, Warning, TEXT("Player selected fixer."));
}

void AArmoredPlayerController::UseNitro()
{
    UE_LOG(LogTemp, Warning, TEXT("Player selected nitro."));
}
