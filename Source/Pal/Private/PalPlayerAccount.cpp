#include "PalPlayerAccount.h"

UPalPlayerAccount::UPalPlayerAccount() {
    this->State = EPalPlayerAccountState::Uninitialized;
    this->IndividualHandle = NULL;
    this->OtomoData = NULL;
    this->CharacterMakeData = NULL;
    this->InventoryData = NULL;
    this->PalStorage = NULL;
    this->TechnologyData = NULL;
    this->RecordData = NULL;
    this->bIsSelectedInitMapPoint = false;
}

