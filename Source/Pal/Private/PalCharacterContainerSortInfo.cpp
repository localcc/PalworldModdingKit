#include "PalCharacterContainerSortInfo.h"

FPalCharacterContainerSortInfo::FPalCharacterContainerSortInfo() {
    this->SortType = EPalCharacterContainerSortType::PaldexNo_Asc;
    this->bPrioritizeMale = false;
    this->bPrioritizeFemael = false;
    this->bPrioritizeImportedPal = false;
}

