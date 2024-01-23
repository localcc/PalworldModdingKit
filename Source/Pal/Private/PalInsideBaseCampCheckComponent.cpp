#include "PalInsideBaseCampCheckComponent.h"

bool UPalInsideBaseCampCheckComponent::IsInsideBaseCamp() {
    return false;
}

UPalBaseCampModel* UPalInsideBaseCampCheckComponent::GetInsideBaseCampModel() {
    return NULL;
}

FGuid UPalInsideBaseCampCheckComponent::GetInsideBaseCampID() {
    return FGuid{};
}

UPalInsideBaseCampCheckComponent::UPalInsideBaseCampCheckComponent() {
}

