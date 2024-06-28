#include "PalNPCTalkSystem.h"

UPalNPCTalkSystem::UPalNPCTalkSystem() {
    this->talkWidgetParameter = NULL;
    this->talkWidget = NULL;
    this->nowTalkDataIndex = 0;
    this->FuncParam = NULL;
    this->CustomFuncResult = EPalNPCTalkCustomFunctionResult::None;
    this->CustomFuncChoseIndex = 0;
    this->CustomFuncTalkDataIndex = 0;
}

void UPalNPCTalkSystem::SetCustomFunctionResult_Implementation(EPalNPCTalkCustomFunctionResult Result) {
}

void UPalNPCTalkSystem::SetCustomFunctionChoseIndex_Implementation(int32 Index) {
}

EPalNPCTalkProceedResult UPalNPCTalkSystem::Proceed() {
    return EPalNPCTalkProceedResult::Failed;
}

void UPalNPCTalkSystem::Initialize(UPalTalkWidgetParameter* InParameter, UPalTalkWindowWidgetBase* inTalkWidget) {
}

bool UPalNPCTalkSystem::ChangeSeqence(FName targetSeqenceName) {
    return false;
}

bool UPalNPCTalkSystem::CallCustomFunc() {
    return false;
}

void UPalNPCTalkSystem::AddArgument_Implementation(const FString& Key, const FText& Text) {
}


