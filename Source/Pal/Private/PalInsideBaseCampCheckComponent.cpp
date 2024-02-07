#include "PalInsideBaseCampCheckComponent.h"

UPalInsideBaseCampCheckComponent::UPalInsideBaseCampCheckComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

bool UPalInsideBaseCampCheckComponent::IsInsideBaseCamp() {
    return false;
}

UPalBaseCampModel* UPalInsideBaseCampCheckComponent::GetInsideBaseCampModel() {
    return NULL;
}

FGuid UPalInsideBaseCampCheckComponent::GetInsideBaseCampID() {
    return FGuid{};
}


