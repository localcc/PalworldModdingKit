#include "PalItemRequestNPCComponent.h"

UPalItemRequestNPCComponent::UPalItemRequestNPCComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RequestCategory = EPalItemRequireCategory::Food_A;
    this->EnableCircum = false;
}


