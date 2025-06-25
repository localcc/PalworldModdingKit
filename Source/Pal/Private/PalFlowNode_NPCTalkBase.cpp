#include "PalFlowNode_NPCTalkBase.h"

UPalFlowNode_NPCTalkBase::UPalFlowNode_NPCTalkBase() {
    this->AllowedSignalModes.AddDefaulted(3);
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->bSaveNetworkInvoke = false;
    this->bInvokeWhenAlreadySaved = false;
}

void UPalFlowNode_NPCTalkBase::RequestInvokeInServer() {
}

FPalNetworkNPCTalkRequestData UPalFlowNode_NPCTalkBase::MakeNetworkRequestData() const {
    return FPalNetworkNPCTalkRequestData{};
}

APalCharacter* UPalFlowNode_NPCTalkBase::GetTalker() const {
    return NULL;
}

UPalNPCTalkSystem* UPalFlowNode_NPCTalkBase::GetNPCTalkSystem() const {
    return NULL;
}

FName UPalFlowNode_NPCTalkBase::GetNetworkInvokeName() const {
    return NAME_None;
}

int32 UPalFlowNode_NPCTalkBase::GetCurrentTalkCount() const {
    return 0;
}



