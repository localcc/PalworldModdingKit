#include "PalUIDismantlingModel.h"

UPalUIDismantlingModel::UPalUIDismantlingModel() {
}

void UPalUIDismantlingModel::Setup() {
}


bool UPalUIDismantlingModel::IsOutsideBaseCamp() const {
    return false;
}

bool UPalUIDismantlingModel::IsInsideBaseCampForPlayer() const {
    return false;
}

bool UPalUIDismantlingModel::IsInsideBaseCamp() const {
    return false;
}

UPalBaseCampModel* UPalUIDismantlingModel::GetBaseCampModelForPlayer() const {
    return NULL;
}

UPalBaseCampModel* UPalUIDismantlingModel::GetBaseCampModel(bool bIncludeForPlayer) {
    return NULL;
}

void UPalUIDismantlingModel::FinishDismantling() {
}

void UPalUIDismantlingModel::Dispose() {
}

void UPalUIDismantlingModel::DismantleObject(const bool bContinuously) {
}


