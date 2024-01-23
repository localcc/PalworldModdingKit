#include "PalTalkWindowWidgetBase.h"





EPalNPCTalkSelectedChoiceResult UPalTalkWindowWidgetBase::NotifyChoiceIndex(int32 Index) {
    return EPalNPCTalkSelectedChoiceResult::ExecutedBySystem;
}

bool UPalTalkWindowWidgetBase::HasArguments() const {
    return false;
}

void UPalTalkWindowWidgetBase::CreateTextAppliedArgments(const FText& OrgText, FText& OutText) {
}

void UPalTalkWindowWidgetBase::AddArgument(const FString& Key, const FText& Text) {
}

UPalTalkWindowWidgetBase::UPalTalkWindowWidgetBase() {
    this->talkSystem = NULL;
}

