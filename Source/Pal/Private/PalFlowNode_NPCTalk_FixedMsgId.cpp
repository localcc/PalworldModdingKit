#include "PalFlowNode_NPCTalk_FixedMsgId.h"

UPalFlowNode_NPCTalk_FixedMsgId::UPalFlowNode_NPCTalk_FixedMsgId() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
}

void UPalFlowNode_NPCTalk_FixedMsgId::OnEndText(UPalNPCTalkSystem* TalkSystem) {
}

TArray<FName> UPalFlowNode_NPCTalk_FixedMsgId::GetRowNames() const {
    return TArray<FName>();
}


