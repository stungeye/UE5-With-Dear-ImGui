// Fill out your copyright notice in the Description page of Project Settings.


#include "ImGuiActor.h"

// This header is required to make use of Dear ImGui.
#include <imgui.h>

// Sets default values
AImGuiActor::AImGuiActor() {
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AImGuiActor::BeginPlay() {
	Super::BeginPlay();

}

// ImGui windows need to be rendered every frame.
void AImGuiActor::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	static float Scale = 1.0f;
	static float ScaleOld = Scale;

	ImGui::Begin("Cube Scale", nullptr, ImGuiWindowFlags_AlwaysAutoResize);
	ImGui::SliderFloat("Scale", &Scale, 0.1f, 5.0f);
	ImGui::Text("FPS: %.1f", ImGui::GetIO().Framerate);
	ImGui::End();

	// Update this actor's scale if the Scale variable has changed
	// by way of the ImGui slider.
	if (Scale != ScaleOld) {
		ScaleOld = Scale;
		SetActorScale3D(FVector3d{Scale});
	}
}
