#include "PalQuestBlock_CountPickupItem.h"
#include "Net/UnrealNetwork.h"

UPalQuestBlock_CountPickupItem::UPalQuestBlock_CountPickupItem() {
    this->RequireCount = 0;
    this->NowPickupCount = 0;
}

void UPalQuestBlock_CountPickupItem::OnPickupItem(TArray<FPalItemAndNum>& ItemInfos) {
}

void UPalQuestBlock_CountPickupItem::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalQuestBlock_CountPickupItem, NowPickupCount);
}


