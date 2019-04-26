// Fill out your copyright notice in the Description page of Project Settings.
#include "Tank.h"
#include "TankAiController.h"

void ATankAiController::BeginPlay()
{

	Super::BeginPlay();

	auto playerTank = GetPlayerTank();
	if (!playerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI controller could not find player tank"));

	}
	else { UE_LOG(LogTemp, Warning, TEXT("AI controll found tank %s :"), *(playerTank->GetName())) }

}

ATank* ATankAiController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank * ATankAiController::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerPawn)
	{
		return nullptr;
	}
	return Cast<ATank>(PlayerPawn);
}
