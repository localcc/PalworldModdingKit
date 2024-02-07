#include "PalMapObjectBaseCampPassiveEffectWorkSpeedParameterComponent.h"

UPalMapObjectBaseCampPassiveEffectWorkSpeedParameterComponent::UPalMapObjectBaseCampPassiveEffectWorkSpeedParameterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AffectMaxNum = 1;
    this->TargetWorkSuitability = EPalWorkSuitability::None;
    this->WorkSpeedAdditionalRate = 0.00f;
}


