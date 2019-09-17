// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryPickup.h"
#include "Components/StaticMeshComponent.h"

// Set default values
ABatteryPickup::ABatteryPickup()
{
	GetMesh()->SetSimulatePhysics(true);

	// the base power level of the battery
	BatteryPower = 150.0f;
}

void ABatteryPickup::WasCollected_Implementation() 
{
	// Use the base pickup behaviour
	Super::WasCollected_Implementation();

	// Destroy the battery
	Destroy();
}

float ABatteryPickup::GetPower()
{
	return BatteryPower;
}