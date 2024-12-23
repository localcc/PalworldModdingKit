#include "PalMapObjectItemBoothParameterComponent.h"

UPalMapObjectItemBoothParameterComponent::UPalMapObjectItemBoothParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StoreSlotNum = 10;
    this->CollectSlotNum = 10;
    this->CorruptionMultiplier = 1.00f;
}


