#include "PalMasterDataTableAccessBase.h"

TArray<FName> UPalMasterDataTableAccessBase::GetRowNames() const {
    return TArray<FName>();
}

UPalMasterDataTableAccessBase::UPalMasterDataTableAccessBase() {
    this->DataTable = NULL;
}

