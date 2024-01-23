#include "PalAudioFadeParameter.h"

FPalAudioFadeParameter::FPalAudioFadeParameter() {
    this->FadeType = EPalAudioFadeType::None;
    this->CurrentVolume = 0.00f;
}

