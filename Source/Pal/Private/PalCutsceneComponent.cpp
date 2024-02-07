#include "PalCutsceneComponent.h"
#include "Templates/SubclassOf.h"

UPalCutsceneComponent::UPalCutsceneComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CutsceneActor = NULL;
    this->FadeParam = NULL;
}

void UPalCutsceneComponent::StopCutsceneToServer_Implementation() {
}

void UPalCutsceneComponent::StopCutscene() {
}

void UPalCutsceneComponent::StartFadeOut() {
}

APalCutsceneActor* UPalCutsceneComponent::SpawnCutsceneActor(TSubclassOf<APalCutsceneActor> CutsceneActorClass, FVector Location, FRotator Rotation, AActor* Owner) {
    return NULL;
}

void UPalCutsceneComponent::PlayCutsceneToServer_Implementation() {
}

void UPalCutsceneComponent::PlayCutscene(APalCutsceneActor* InCutsceneActor, bool IsAutoDestroy) {
}

void UPalCutsceneComponent::OnFinished() {
}

void UPalCutsceneComponent::OnEndFadeOut() {
}

bool UPalCutsceneComponent::IsPlayingCutscene() const {
    return false;
}


