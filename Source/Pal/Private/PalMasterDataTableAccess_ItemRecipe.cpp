#include "PalMasterDataTableAccess_ItemRecipe.h"

UPalMasterDataTableAccess_ItemRecipe::UPalMasterDataTableAccess_ItemRecipe() {
}

void UPalMasterDataTableAccess_ItemRecipe::BPExec_FindRow(FName RowName, EPalMasterDataExecPinType& ExecType, FPalItemRecipe& OutData) {
}

FPalItemRecipe UPalMasterDataTableAccess_ItemRecipe::BP_FindRow(FName RowName, bool& bResult) const {
    return FPalItemRecipe{};
}


