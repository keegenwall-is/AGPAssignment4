// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"

#include "HealthComponent.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BulletStartPosition = CreateDefaultSubobject<USceneComponent>("Bullet Start");
	BulletStartPosition->SetupAttachment(GetRootComponent());
	HealthComponent = CreateDefaultSubobject<UHealthComponent>("Health Component");
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABaseCharacter::Fire()
{
	FireImplementation();
	MulticastFire_Implementation();
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bHasWeaponEquipped)
	{
		TimeSinceLastShot += DeltaTime;
	}
}

bool ABaseCharacter::HasWeapon()
{
	return bHasWeaponEquipped;
}

bool ABaseCharacter::GetIsFiring()
{
	return bIsFiring;
}

void ABaseCharacter::EquipWeapon(bool bEquipWeapon)
{

	//if (GetLocalRole() == ROLE_Authority)
	//{
		EquipWeaponImplementation(bEquipWeapon);
		MulticastEquipWeapon_Implementation(bEquipWeapon);
	//}
	
}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ABaseCharacter::EquipWeaponImplementation(bool bEquipWeapon)
{

	bHasWeaponEquipped = bEquipWeapon;
	EquipWeaponGraphical(bEquipWeapon);
	if (bEquipWeapon)
	{
		UE_LOG(LogTemp, Display, TEXT("Player has equipped weapon."))
	}
	else
	{
		UE_LOG(LogTemp, Display, TEXT("Player has unequipped weapon."))
	}
	
}

void ABaseCharacter::FireImplementation()
{
	if (HasWeapon())
	{
		bIsFiring = !bIsFiring;
		UE_LOG(LogTemp, Display, TEXT("Player is shooting weapon. bIsFiring = %s"), bIsFiring ? TEXT("true") : TEXT("false"));
		FiringGraphical(bIsFiring);
	}
}

void ABaseCharacter::MulticastFire_Implementation()
{
	FireImplementation();
}

void ABaseCharacter::MulticastEquipWeapon_Implementation(bool bEquipWeapon)
{
	EquipWeaponImplementation(bEquipWeapon);
}

