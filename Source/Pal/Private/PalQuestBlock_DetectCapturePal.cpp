#include "PalQuestBlock_DetectCapturePal.h"
#include "Net/UnrealNetwork.h"

UPalQuestBlock_DetectCapturePal::UPalQuestBlock_DetectCapturePal() {
    this->RequireCount = 0;
    this->NowCaptureCount = 0;
}

void UPalQuestBlock_DetectCapturePal::OnCapturedPal(UPalIndividualCharacterHandle* Handle) {
}

void UPalQuestBlock_DetectCapturePal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalQuestBlock_DetectCapturePal, NowCaptureCount);
}


