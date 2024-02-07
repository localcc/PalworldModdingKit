#include "PalMasterDataTableAccess_MapObjectMasterData.h"

UPalMasterDataTableAccess_MapObjectMasterData::UPalMasterDataTableAccess_MapObjectMasterData() {
}

void UPalMasterDataTableAccess_MapObjectMasterData::BPExec_FindRow(FName RowName, EPalMasterDataExecPinType& ExecType, FPalMapObjectMasterData& OutData) {
}

FPalMapObjectMasterData UPalMasterDataTableAccess_MapObjectMasterData::BP_FindRow(FName RowName, bool& bResult) const {
    return FPalMapObjectMasterData{};
}


