#include "PalNPCTalkSelectedChoiceCommandData.h"

FPalNPCTalkSelectedChoiceCommandData::FPalNPCTalkSelectedChoiceCommandData() {
    this->selectedChoiceCommand = EPalNPCTalkSelectedChoiceCommand::EndTalk;
    this->isCloseWhenCalledCustomFunc = false;
    this->CustomFuncParam = NULL;
}

