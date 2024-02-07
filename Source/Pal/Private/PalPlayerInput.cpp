#include "PalPlayerInput.h"

UPalPlayerInput::UPalPlayerInput() {
    this->DebugExecBindings.AddDefaulted(18);
}

bool UPalPlayerInput::UpdateActionMapping(const FName InActionName, const FPalKeyConfigKeys& NewKey, EPalKeyConfigCategory Category) {
    return false;
}

void UPalPlayerInput::ResetAxisKey(const FName InAxisName, EPalKeyConfigCategory Category, EPalKeyConfigAxisFilterType FilterType) {
}

void UPalPlayerInput::ResetActionKey(const FName InActionName, EPalKeyConfigCategory Category) {
}

void UPalPlayerInput::OnChangeKeyConfig(const FPalKeyConfigSettings& PrevSettings, const FPalKeyConfigSettings& NewSettings) {
}

bool UPalPlayerInput::IsEnableKey(FKey Key, EPalKeyConfigCategory InputType) const {
    return false;
}

void UPalPlayerInput::GetAxisMappingByName(const FName InAxisName, TArray<FInputAxisKeyMapping>& OutMappings) const {
}

FPalKeyConfigKeys UPalPlayerInput::GetAxisConfigKeys(const FName InAxisName, EPalKeyConfigCategory Category, EPalKeyConfigAxisFilterType FilterType) {
    return FPalKeyConfigKeys{};
}

void UPalPlayerInput::GetActionMappingByName(const FName InActionName, TArray<FInputActionKeyMapping>& OutMappings) const {
}

FPalKeyConfigKeys UPalPlayerInput::GetActionConfigKeys(const FName InActionName, EPalKeyConfigCategory Category) {
    return FPalKeyConfigKeys{};
}

void UPalPlayerInput::FiltterCategoryAxisMappings(EPalKeyConfigCategory Category, EPalKeyConfigAxisFilterType FilterType, TArray<FInputAxisKeyMapping>& Mappings) const {
}

void UPalPlayerInput::FiltterCategoryActionMappings(EPalKeyConfigCategory Category, TArray<FInputActionKeyMapping>& Mappings) const {
}


