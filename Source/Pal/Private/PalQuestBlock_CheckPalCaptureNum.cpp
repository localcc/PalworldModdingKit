#include "PalQuestBlock_CheckPalCaptureNum.h"
#include "Net/UnrealNetwork.h"

UPalQuestBlock_CheckPalCaptureNum::UPalQuestBlock_CheckPalCaptureNum() {
    this->RequireCount = 0;
    this->NowCaptureCount = 0;
}

void UPalQuestBlock_CheckPalCaptureNum::CheckCount() {
}

void UPalQuestBlock_CheckPalCaptureNum::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalQuestBlock_CheckPalCaptureNum, NowCaptureCount);
}


