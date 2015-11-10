// Fill out your copyright notice in the Description page of Project Settings.

#include "BET.h"
#include "BETWeaponSpawnerSpecific.h"

ABETWeapon* ABETWeaponSpawnerSpecific::SpawnWeapon()
{
	Super::SpawnWeapon();
	return GetWorld()->SpawnActor<ABETWeapon>(WeaponClass, 
		GetActorLocation(), FRotator::ZeroRotator);
}


