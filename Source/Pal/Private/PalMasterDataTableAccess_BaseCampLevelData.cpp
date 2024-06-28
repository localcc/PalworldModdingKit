#include "PalMasterDataTableAccess_BaseCampLevelData.h"

UPalMasterDataTableAccess_BaseCampLevelData::UPalMasterDataTableAccess_BaseCampLevelData() {
}

int32 UPalMasterDataTableAccess_BaseCampLevelData::GetMaxWorkerMaxNum() {
    return 0;
}

int32 UPalMasterDataTableAccess_BaseCampLevelData::GetMaxLevel() {
    return 0;
}

int32 UPalMasterDataTableAccess_BaseCampLevelData::GetMaxBaseCampMaxNumInGuild() {
    return 0;
}

FPalBaseCampLevelMasterData UPalMasterDataTableAccess_BaseCampLevelData::GetLevelInfo(int32 Level) {
    return FPalBaseCampLevelMasterData{};
}


