// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "BETWeapon.h"
#include "BETWeaponSpawner.generated.h"

UCLASS(Abstract)
class BET_API ABETWeaponSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABETWeaponSpawner();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

protected:
	UPROPERTY(EditDefaultsOnly)
	float MaxRespawnTime;
	float TimeToRespawn;

	ABETWeapon* SpawnedWeapon;

protected:
	virtual ABETWeapon* SpawnWeapon();
};
