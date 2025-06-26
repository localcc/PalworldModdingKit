#include "PalQuestBlock_DetectCraft.h"
#include "Net/UnrealNetwork.h"

UPalQuestBlock_DetectCraft::UPalQuestBlock_DetectCraft() {
    this->RequireCount = 0;
    this->NowCraftNumCount = 0;
}

void UPalQuestBlock_DetectCraft::OnCraftItem(TArray<FPalItemAndNum>& ItemInfos) {
}

void UPalQuestBlock_DetectCraft::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalQuestBlock_DetectCraft, NowCraftNumCount);
}


