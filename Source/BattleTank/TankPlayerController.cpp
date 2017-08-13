// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"


void ATankPlayerController::BeginPlay()
{
    Super::BeginPlay();
    
    if (GetControlledTank())
    {
        UE_LOG(LogTemp, Warning, TEXT("Controlled Tank: %s"), *(GetControlledTank()->GetName()));
    } else {
        UE_LOG(LogTemp, Warning, TEXT("No tank found."))
    }
}

ATank* ATankPlayerController::GetControlledTank() const
{
    return Cast<ATank>(GetPawn());
}
