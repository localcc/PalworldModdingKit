#include "PalWazaDatabase.h"

UPalWazaDatabase::UPalWazaDatabase() {
    this->WazaDataTable = NULL;
    this->WazaMasterLevel_DataTable = NULL;
    this->WazaMasterTamago_DataTable = NULL;
}

bool UPalWazaDatabase::IsExistMasterrableWaza_BetweenLevel(FName CharacterID, int32 StartLevel, int32 EndLevel) {
    return false;
}

void UPalWazaDatabase::GetMasterrableWaza_BetweenLevel(FName CharacterID, int32 StartLevel, int32 EndLevel, TMap<EPalWazaID, int32>& OutMap) {
}

bool UPalWazaDatabase::FindWazaForBP(EPalWazaID Type, FPalWazaDatabaseRaw& OutData) {
    return false;
}


