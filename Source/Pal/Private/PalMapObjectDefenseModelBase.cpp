#include "PalMapObjectDefenseModelBase.h"

UPalMapObjectDefenseModelBase::UPalMapObjectDefenseModelBase() {
}

FVector UPalMapObjectDefenseModelBase::GetLocation() const {
    return FVector{};
}

EPalMapObjectDefenseType UPalMapObjectDefenseModelBase::GetDefenseType() const {
    return EPalMapObjectDefenseType::Wait;
}


