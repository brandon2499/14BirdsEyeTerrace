// Fill out your copyright notice in the Description page of Project Settings.

#include "BET.h"
#include "BETWeapon.h"


// Sets default values
ABETWeapon::ABETWeapon(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Collider = CreateDefaultSubobject<USceneComponent>(TEXT("Collider"));
	RootComponent = Collider;
	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMesh"));
	WeaponMesh->AttachTo(RootComponent);
}

// Called when the game starts or when spawned
void ABETWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABETWeapon::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void ABETWeapon::Fire()
{

}