// Copyright 2017 Micho Todorovich, all rights reserved.

#pragma once

#include "CoreMinimal.h"
//#include "ShieldSystemComponent.h"
#include "GameFramework/Actor.h"
#include "SpaceShip.generated.h"

UCLASS(BlueprintType, ClassGroup = (SpaceShip), meta = (BlueprintSpawnableComponent))
class INTERSTELLAR_API ASpaceShip : public AActor
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int max_structure_points = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int current_structure_points = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UShieldSystemComponent* shields;

	// Sets default values for this actor's properties
	ASpaceShip(const FObjectInitializer& ObjectInitializer);

	// Called every frame
	virtual void Tick(float DeltaTime) override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent & PropertyChangedEvent) override;
#endif

	UFUNCTION(BlueprintImplementableEvent)
	void CreateGrid();

};