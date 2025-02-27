#include "PalObjectPoolManager.h"

UPalObjectPoolManager::UPalObjectPoolManager() {
}

void UPalObjectPoolManager::RegisterToPool(AActor* InActor, FPalObjectPoolKey InKey) {
}

void UPalObjectPoolManager::General_DeactivateActor(AActor* InActor) {
}

void UPalObjectPoolManager::General_ActivateActor(AActor* InActor) {
}

void UPalObjectPoolManager::DestroyedActor(AActor* NewDestroyedActor) {
}

void UPalObjectPoolManager::DeactivateToPool(AActor* InActor) {
}

void UPalObjectPoolManager::ClearPool(FPalObjectPoolKey InKey, bool bDestroyUsingActor) {
}

AActor* UPalObjectPoolManager::ActivateFromPool(FPalObjectPoolActivateParameter InParameter) {
    return NULL;
}


