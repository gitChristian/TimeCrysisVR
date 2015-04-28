// Fill out your copyright notice in the Description page of Project Settings.

#include "TimeCrysisVR.h"
#include "MainBullet.h"


// Sets default values
AMainBullet::AMainBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMainBullet::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMainBullet::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

