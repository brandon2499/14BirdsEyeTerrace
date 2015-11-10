// Fill out your copyright notice in the Description page of Project Settings.


#include "BET.h"
#include "BETWeaponSpawner.h"


// Sets default values
ABETWeaponSpawner::ABETWeaponSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABETWeaponSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABETWeaponSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (SpawnedWeapon == NULL)
	{
		TimeToRespawn -= DeltaTime;
		if (TimeToRespawn <= 0.f)
		{
			SpawnedWeapon = SpawnWeapon();
		}
	}

}

ABETWeapon* ABETWeaponSpawner::SpawnWeapon()
{
	TimeToRespawn = MaxRespawnTime;
	return NULL;
}