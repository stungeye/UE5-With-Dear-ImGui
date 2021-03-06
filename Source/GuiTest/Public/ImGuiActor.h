// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ImGuiActor.generated.h"

UCLASS()
class GUITEST_API AImGuiActor : public AActor {
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AImGuiActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float Scale{1.0};
	float ScaleOld{1.0};

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
