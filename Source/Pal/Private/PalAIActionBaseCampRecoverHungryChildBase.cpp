#include "PalAIActionBaseCampRecoverHungryChildBase.h"

bool UPalAIActionBaseCampRecoverHungryChildBase::TryGetTargetMapObjectConcreteModel(UPalMapObjectConcreteModelBase*& OutTargetModel) {
    return false;
}

void UPalAIActionBaseCampRecoverHungryChildBase::ToggleShowWantFoodHUD(const bool bShow) {
}

bool UPalAIActionBaseCampRecoverHungryChildBase::IsExistEnoughFoodInTarget() {
    return false;
}

bool UPalAIActionBaseCampRecoverHungryChildBase::IsAvailableDistance() {
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

UPalAIActionBaseCampRecoverHungryChildBase::UPalAIActionBaseCampRecoverHungryChildBase() {
}

