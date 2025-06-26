#include "PalTalkWindowWidgetBase.h"

UPalTalkWindowWidgetBase::UPalTalkWindowWidgetBase() {
}



void UPalTalkWindowWidgetBase::OnEndTalk() {
}

UPalNPCTalkSystem* UPalTalkWindowWidgetBase::GetTalkSystem() const {
    return NULL;
}

FText UPalTalkWindowWidgetBase::FormatByCustomTagArgument(const FText& OriginalText) {
    return FText::GetEmpty();
}


