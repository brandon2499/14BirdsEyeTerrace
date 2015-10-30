#pragma once

#include "BETWeapon.h"
#include "BETProjectile.h"
#include "BETProjectileWeapon.generated.h"


UCLASS()
class BET_API ABETProjectileWeapon : public ABETWeapon
{
	GENERATED_BODY()

public:
	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector GunOffset;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class ABETProjectile> ProjectileClass;

public:
	ABETProjectileWeapon(const FObjectInitializer& ObjectInitializer);
	virtual void Fire() override;
};