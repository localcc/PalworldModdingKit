#include "PalTreasureMapWorldSubsystem.h"

UPalTreasureMapWorldSubsystem::UPalTreasureMapWorldSubsystem() {
    this->TreasureMapInteractivePointZ = -1000.00f;
    this->TreasureMapInteractivePointClass = NULL;
}

void UPalTreasureMapWorldSubsystem::OnRemoveBaseCampModel_ServerInternal(const FGuid BaseCampId) {
}

void UPalTreasureMapWorldSubsystem::OnCreateBaseCampModel_ServerInternal(const FGuid BaseCampId) {
}


