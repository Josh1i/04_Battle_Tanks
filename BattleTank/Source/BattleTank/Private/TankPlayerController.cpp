// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	auto controlledTank = GetControlledTank();
	if (!controlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("not possesed"));

	}
	else { UE_LOG(LogTemp, Warning, TEXT("tank is possesed")) }

}
void ATankPlayerController::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);
	AimTowardsCrosshair();
	UE_LOG(LogTemp, Warning, TEXT("ticking"));
}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPlayerController::AimTowardsCrosshair()
{
	if (!GetControlledTank()) {return}

	
}
