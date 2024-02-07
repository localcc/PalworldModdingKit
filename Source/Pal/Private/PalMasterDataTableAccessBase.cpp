#include "PalMasterDataTableAccessBase.h"

UPalMasterDataTableAccessBase::UPalMasterDataTableAccessBase() {
    this->DataTable = NULL;
}

TArray<FName> UPalMasterDataTableAccessBase::GetRowNames() const {
    return TArray<FName>();
}


