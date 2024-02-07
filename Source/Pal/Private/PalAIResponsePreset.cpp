#include "PalAIResponsePreset.h"

UPalAIResponsePreset::UPalAIResponsePreset() {
    this->Discover_Player = EPalAIResponseType::Ignore;
    this->Discover_Greater = EPalAIResponseType::Ignore;
    this->Discover_Equal = EPalAIResponseType::Ignore;
    this->Discover_Smaller = EPalAIResponseType::Ignore;
    this->Damaged_Player = EPalAIResponseType::Ignore;
    this->Damaged_Greater = EPalAIResponseType::Ignore;
    this->Damaged_Equal = EPalAIResponseType::Ignore;
    this->Damaged_Smaller = EPalAIResponseType::Ignore;
}


