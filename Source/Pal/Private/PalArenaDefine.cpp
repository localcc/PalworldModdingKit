#include "PalArenaDefine.h"

UPalArenaDefine::UPalArenaDefine() {
}

FGuid UPalArenaDefine::OutsiderPlayerUid() {
    return FGuid{};
}

int32 UPalArenaDefine::ArenaPlayerMax() {
    return 0;
}

int32 UPalArenaDefine::ArenaPartyPalMax() {
    return 0;
}

FName UPalArenaDefine::ArenaOutBattleFlag() {
    return NAME_None;
}


