#include "PalMasterDataTableAccess_BuildObjectData.h"

UPalMasterDataTableAccess_BuildObjectData::UPalMasterDataTableAccess_BuildObjectData() {
}

void UPalMasterDataTableAccess_BuildObjectData::BPExec_FindRowByMapObjectId(FName MapObjectId, EPalMasterDataExecPinType& ExecType, FPalBuildObjectData& OutData) {
}

void UPalMasterDataTableAccess_BuildObjectData::BPExec_FindRow(FName RowName, EPalMasterDataExecPinType& ExecType, FPalBuildObjectData& OutData) {
}

FPalBuildObjectData UPalMasterDataTableAccess_BuildObjectData::BP_FindRowByMapObjectId(FName MapObjectId, FName& OutRowName, bool& bResult) const {
    return FPalBuildObjectData{};
}

FPalBuildObjectData UPalMasterDataTableAccess_BuildObjectData::BP_FindRow(FName RowName, bool& bResult) const {
    return FPalBuildObjectData{};
}


