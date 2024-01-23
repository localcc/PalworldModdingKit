#include "PalNPCTalkData.h"

FPalNPCTalkData::FPalNPCTalkData() {
    this->TalkCommand = EPalNPCTalkCommand::SimpleMessages;
    this->isCloseWhenCalledCustomFunc = false;
    this->CustomFuncParam = NULL;
}

