#include "PalQuestBlock_CountBaseCamp.h"
#include "Net/UnrealNetwork.h"

UPalQuestBlock_CountBaseCamp::UPalQuestBlock_CountBaseCamp() {
    this->RequireCampCount = 0;
    this->NowBaseCampCount = 0;
}

void UPalQuestBlock_CountBaseCamp::OnTimer_CheckBaseCamp() {
}

void UPalQuestBlock_CountBaseCamp::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalQuestBlock_CountBaseCamp, NowBaseCampCount);
}


