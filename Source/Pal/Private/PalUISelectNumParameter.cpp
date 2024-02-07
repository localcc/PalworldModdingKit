#include "PalUISelectNumParameter.h"

UPalUISelectNumParameter::UPalUISelectNumParameter() {
    this->MinNum = 0;
    this->MaxNum = 0;
    this->defaultNum = 0;
}

void UPalUISelectNumParameter::InvokeComplateCallback(EPalUISelectNumResult Result, int32 selectedNum) {
}

void UPalUISelectNumParameter::InvokeChangedNumCallback(int32 selectedNum) {
}


