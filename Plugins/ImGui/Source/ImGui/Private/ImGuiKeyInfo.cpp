#include "ImGuiKeyInfo.h"

FImGuiKeyInfo::FImGuiKeyInfo() {
    this->Shift = ECheckBoxState::Unchecked;
    this->Ctrl = ECheckBoxState::Unchecked;
    this->Alt = ECheckBoxState::Unchecked;
    this->Cmd = ECheckBoxState::Unchecked;
}

