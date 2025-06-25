#include "PalNPCTalkSystem.h"

UPalNPCTalkSystem::UPalNPCTalkSystem() {
    this->TalkWidget = NULL;
}

void UPalNPCTalkSystem::SetVisibleTalkHUD(const FName& FlagKey, bool bIsVisible) {
}

void UPalNPCTalkSystem::SetDynamicParameters(const FName& ParameterName, UPalNPCTalkDynamicParameter* InParameter) {
}

void UPalNPCTalkSystem::OnEndText(UPalTalkWindowWidgetBase* SelfTalkWidget) {
}

void UPalNPCTalkSystem::OnConfirmChoice(UPalTalkWindowWidgetBase* SelfTalkWidget, const FName& ChoiceMsgID, const int32 ChoiceIndex) {
}

UPalNPCTalkDynamicParameter* UPalNPCTalkSystem::GetDynamicParameters(const FName& ParameterName) {
    return NULL;
}

void UPalNPCTalkSystem::AddCustomTextTagArgument(const FName& TagName, const FString& ArgumentString) {
}


