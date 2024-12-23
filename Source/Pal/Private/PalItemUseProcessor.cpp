#include "PalItemUseProcessor.h"

UPalItemUseProcessor::UPalItemUseProcessor() {
}

bool UPalItemUseProcessor::UseItemToCharacter_ServerInternal_Implementation(UPalStaticItemDataBase* StaticItemData, const FPalInstanceID& TargetCharacterID) {
    return false;
}

bool UPalItemUseProcessor::CanUseItemToCharacter_Implementation(UPalStaticItemDataBase* StaticItemData, const FPalInstanceID& TargetCharacterID) {
    return false;
}


