#include "PalEditableTextBox.h"

UPalEditableTextBox::UPalEditableTextBox() {
    this->IsReadOnly = false;
    this->IsPassword = false;
    this->MinimumDesiredWidth = 0.00f;
    this->IsCaretMovedWhenGainFocus = true;
    this->SelectAllTextWhenFocused = false;
    this->RevertTextOnEscape = false;
    this->ClearKeyboardFocusOnCommit = true;
    this->SelectAllTextOnCommit = false;
    this->AllowContextMenu = true;
    this->KeyboardType = EVirtualKeyboardType::Default;
    this->VirtualKeyboardTrigger = EVirtualKeyboardTrigger::OnFocusByPointer;
    this->VirtualKeyboardDismissAction = EVirtualKeyboardDismissAction::TextChangeOnDismiss;
    this->Justification = ETextJustify::Left;
    this->OverflowPolicy = ETextOverflowPolicy::Clip;
}

void UPalEditableTextBox::SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy) {
}

void UPalEditableTextBox::SetText(FText InText) {
}

void UPalEditableTextBox::SetJustification(TEnumAsByte<ETextJustify::Type> InJustification) {
}

void UPalEditableTextBox::SetIsReadOnly(bool bReadOnly) {
}

void UPalEditableTextBox::SetIsPassword(bool bIsPassword) {
}

void UPalEditableTextBox::SetHintText(FText InText) {
}

void UPalEditableTextBox::SetForegroundColor(FLinearColor Color) {
}

void UPalEditableTextBox::SetError(FText InError) {
}

bool UPalEditableTextBox::HasError() const {
    return false;
}

FText UPalEditableTextBox::GetText() const {
    return FText::GetEmpty();
}

void UPalEditableTextBox::ClearError() {
}


