#include "PalFlowNode_GetItem.h"

UPalFlowNode_GetItem::UPalFlowNode_GetItem() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->LotteryDataTable = NULL;
}



bool UPalFlowNode_GetItem::CanGetItemInServer_Implementation(APalCharacter* Talker) {
    return false;
}


