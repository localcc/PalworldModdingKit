#include "PalUIServerDisplayData.h"

FPalUIServerDisplayData::FPalUIServerDisplayData() {
    this->IsPvP = false;
    this->Day = 0;
    this->NowPlayerNum = 0;
    this->MaxPlayerNum = 0;
    this->Ping = 0;
    this->ServerListType = EPalUIServerListFilterType::Official;
    this->ServerPort = 0;
    this->IsLocked = false;
    this->CreateTime = 0;
}

