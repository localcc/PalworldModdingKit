#include "PalComboBoxString.h"

UPalComboBoxString::UPalComboBoxString() {
    this->MaxListHeight = 450.00f;
    this->HasDownArrow = true;
    this->EnableGamepadNavigationMode = true;
    this->bIsFocusable = true;
}

void UPalComboBoxString::SetSelectedOption(const FString& Option) {
}

void UPalComboBoxString::SetSelectedIndex(const int32 Index) {
}

bool UPalComboBoxString::RemoveOption(const FString& Option) {
    return false;
}

void UPalComboBoxString::RefreshOptions() {
}

bool UPalComboBoxString::IsOpen() const {
    return false;
}

FString UPalComboBoxString::GetSelectedOption() const {
    return TEXT("");
}

int32 UPalComboBoxString::GetSelectedIndex() const {
    return 0;
}

int32 UPalComboBoxString::GetOptionCount() const {
    return 0;
}

FString UPalComboBoxString::GetOptionAtIndex(int32 Index) const {
    return TEXT("");
}

int32 UPalComboBoxString::FindOptionIndex(const FString& Option) const {
    return 0;
}

void UPalComboBoxString::ClearSelection() {
}

void UPalComboBoxString::ClearOptions() {
}

void UPalComboBoxString::AddOption(const FString& Option) {
}


