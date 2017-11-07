// Fill out your copyright notice in the Description page of Project Settings.

#include "SpaceShip.h"
//#include "Engine.h"
#include "Intrepid.h"
#include "ShieldSystemComponent.h"
#include "UnrealType.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"

// Sets default values
ASpaceShip::ASpaceShip()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	shields = CreateDefaultSubobject<UShieldSystemComponent>(TEXT("Shields"));

	//CompClass can be a BP
	//shields = NewObject<UShieldSystemComponent>(this, TEXT("ShieldSystem"));
	//
	//if (!shields)
	//{
	//	return;
	//}	
	//FAttachmentTransformRules rule = FAttachmentTransformRules(EAttachmentRule::KeepRelative, true);
	//
	//shields->RegisterComponent();        //You must ConstructObject with a valid Outer that has world, see above	 
	//shields->AttachToComponent(GetRootComponent(), rule);
	////could use different than Root Comp
}


// Called when the game starts or when spawned
void ASpaceShip::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ASpaceShip::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//shield_system.Tick(DeltaTime);
}

void ASpaceShip::PostEditChangeProperty(FPropertyChangedEvent & PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	UE_LOG(DebugLog, Log, TEXT("Post Edit Property Change"));

	switch(PropertyChangedEvent.ChangeType)
	{
		case EPropertyChangeType::Unspecified:
			UE_LOG(DebugLog, Log, TEXT("Unspecified"));
			break;

		case EPropertyChangeType::ArrayAdd:

			UE_LOG(DebugLog, Log, TEXT("ArrayAdd"));
			break;

		case EPropertyChangeType::ValueSet:

			UE_LOG(DebugLog, Log, TEXT("ValueSet"));
			break;

		case EPropertyChangeType::Duplicate:

			UE_LOG(DebugLog, Log, TEXT("Duplicate"));
			break;

		case EPropertyChangeType::Interactive:

			UE_LOG(DebugLog, Log, TEXT("Interactive"));
			break;

		case EPropertyChangeType::Redirected:

			UE_LOG(DebugLog, Log, TEXT("Redirected"));
			break;
	}

	//PropertyChangedEvent.Property->GetClass();

	UE_LOG(DebugLog, Log, TEXT("String %s"), *PropertyChangedEvent.GetPropertyName().ToString());

	//UE_LOG(DebugLog, Log, TEXT("String %s"), PropertyChangedEvent.Property())

}

//inline void FShieldSystem::Tick(float DeltaTime)
//{
//	current_shield_points += recharge_points * DeltaTime;
//
//	if (current_shield_points > max_shield_points)
//	{
//		current_shield_points = max_shield_points;
//	}
//}