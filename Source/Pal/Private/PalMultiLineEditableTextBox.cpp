#include "PalMultiLineEditableTextBox.h"

UPalMultiLineEditableTextBox::UPalMultiLineEditableTextBox() {
    this->AutoWrapText = true;
    this->bIsReadOnly = false;
    this->AllowContextMenu = true;
    this->VirtualKeyboardDismissAction = EVirtualKeyboardDismissAction::TextChangeOnDismiss;
}

void UPalMultiLineEditableTextBox::SetTextStyle(const FTextBlockStyle& InTextStyle) {
}

void UPalMultiLineEditableTextBox::SetText(FText InText) {
}

void UPalMultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly) {
}

void UPalMultiLineEditableTextBox::SetHintText(FText InHintText) {
}

void UPalMultiLineEditableTextBox::SetForegroundColor(FLinearColor Color) {
}

void UPalMultiLineEditableTextBox::SetError(FText InError) {
}

FText UPalMultiLineEditableTextBox::GetText() const {
    return FText::GetEmpty();
}

FText UPalMultiLineEditableTextBox::GetHintText() const {
    return FText::GetEmpty();
}


