#include "PalQuestBlock_CountWorker.h"
#include "Net/UnrealNetwork.h"

UPalQuestBlock_CountWorker::UPalQuestBlock_CountWorker() {
    this->RequireWorkerCount = 0;
    this->NowWorkerCount = 0;
}

void UPalQuestBlock_CountWorker::OnTimer_CheckBaseCampWorker() {
}

void UPalQuestBlock_CountWorker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalQuestBlock_CountWorker, NowWorkerCount);
}


