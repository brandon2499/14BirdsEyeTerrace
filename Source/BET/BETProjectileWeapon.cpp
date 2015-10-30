// Fill out your copyright notice in the Description page of Project Settings.

#include "BET.h"
#include "BETProjectileWeapon.h"


// Sets default values
ABETProjectileWeapon::ABETProjectileWeapon(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
 	
	GunOffset = FVector(100.0f, 30.0f, 10.0f);
}

void ABETProjectileWeapon::Fire()
{
	Super::Fire();
	// try and fire a projectile
	// try and fire a projectile
	if (ProjectileClass != NULL)
	{
		const FRotator SpawnRotation = Instigator->GetControlRotation();
		// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
		const FVector SpawnLocation = GetActorLocation() + SpawnRotation.RotateVector(GunOffset);

		UWorld* const World = GetWorld();
		if (World != NULL)
		{
			// spawn the projectile at the muzzle
			World->SpawnActor<ABETProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
		}

	}
}
