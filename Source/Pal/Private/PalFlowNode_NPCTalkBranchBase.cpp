#include "PalFlowNode_NPCTalkBranchBase.h"

UPalFlowNode_NPCTalkBranchBase::UPalFlowNode_NPCTalkBranchBase() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UPalFlowNode_NPCTalkBranchBase::OnConfirmChoice(UPalNPCTalkSystem* TalkSystem, const FName& ChoiceMsgID, const int32 ChoiceIndex) {
}

TArray<FName> UPalFlowNode_NPCTalkBranchBase::GetRowNames() const {
    return TArray<FName>();
}


