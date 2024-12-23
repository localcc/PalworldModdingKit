#include "PalAIActionBaseCampRecoverHungryChildBase.h"

UPalAIActionBaseCampRecoverHungryChildBase::UPalAIActionBaseCampRecoverHungryChildBase() {
}

bool UPalAIActionBaseCampRecoverHungryChildBase::TryGetTargetMapObjectConcreteModel(UPalMapObjectConcreteModelBase*& OutTargetModel) {
    return false;
}

void UPalAIActionBaseCampRecoverHungryChildBase::ToggleShowWantFoodHUD(const bool bShow) {
}

bool UPalAIActionBaseCampRecoverHungryChildBase::IsExistEnoughFoodInTarget() {
    return false;
}

bool UPalAIActionBaseCampRecoverHungryChildBase::IsAvailableDistance(const float Margin) {
    return false;
}

FVector UPalAIActionBaseCampRecoverHungryChildBase::GetTargetLocation() {
    return FVector{};
}

UPalAIActionBaseCampRecoverHungry* UPalAIActionBaseCampRecoverHungryChildBase::GetParentRecoverHungryAction() {
    return NULL;
}

void UPalAIActionBaseCampRecoverHungryChildBase::GetHungryParameter(FPalMonsterControllerBaseCampHungryParameter& HungeryParameter) {
}


