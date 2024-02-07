#include "PalVisualEffectComponent.h"

UPalVisualEffectComponent::UPalVisualEffectComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UPalVisualEffectComponent::RemoveVisualEffectForActor_Local(AActor* Actor, EPalVisualEffectID VisualEffectID) {
}

void UPalVisualEffectComponent::RemoveVisualEffectForActor(AActor* Actor, EPalVisualEffectID VisualEffectID) {
}

void UPalVisualEffectComponent::RemoveVisualEffectByConflict_ToServer_Implementation(EPalVisualEffectID VisualEffectID, int32 issuerID) {
}

void UPalVisualEffectComponent::RemoveVisualEffectByConflict_ToALL_Implementation(EPalVisualEffectID VisualEffectID, int32 issuerID) {
}

void UPalVisualEffectComponent::RemoveVisualEffect_ToServer_Implementation(EPalVisualEffectID VisualEffectID, int32 issuerID) {
}

void UPalVisualEffectComponent::RemoveVisualEffect_ToALL_Implementation(EPalVisualEffectID VisualEffectID, int32 issuerID) {
}

void UPalVisualEffectComponent::RemoveVisualEffect_Local(EPalVisualEffectID VisualEffectID) {
}

void UPalVisualEffectComponent::RemoveVisualEffect(EPalVisualEffectID VisualEffectID) {
}

void UPalVisualEffectComponent::RemoveConflictVisualEffect(EPalVisualEffectID VisualEffectID) {
}

void UPalVisualEffectComponent::BeginPlay() {
}

UPalVisualEffectBase* UPalVisualEffectComponent::AddVisualEffectForActor_Local(AActor* Actor, EPalVisualEffectID VisualEffectID, FPalVisualEffectDynamicParameter Parameter) {
    return NULL;
}

UPalVisualEffectBase* UPalVisualEffectComponent::AddVisualEffectForActor(AActor* Actor, EPalVisualEffectID VisualEffectID, FPalVisualEffectDynamicParameter Parameter) {
    return NULL;
}

void UPalVisualEffectComponent::AddVisualEffect_ToServer_Implementation(EPalVisualEffectID VisualEffectID, const FPalVisualEffectDynamicParameter& Parameter, int32 issuerID) {
}

void UPalVisualEffectComponent::AddVisualEffect_ToALL_Implementation(EPalVisualEffectID VisualEffectID, const FPalVisualEffectDynamicParameter& Parameter, int32 issuerID) {
}

UPalVisualEffectBase* UPalVisualEffectComponent::AddVisualEffect_Local(EPalVisualEffectID VisualEffectID, const FPalVisualEffectDynamicParameter& Parameter) {
    return NULL;
}

UPalVisualEffectBase* UPalVisualEffectComponent::AddVisualEffect(EPalVisualEffectID VisualEffectID, const FPalVisualEffectDynamicParameter& Parameter) {
    return NULL;
}


