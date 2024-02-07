#include "PalAIActionComponent.h"
#include "Templates/SubclassOf.h"

UPalAIActionComponent::UPalAIActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActionStacks.AddDefaulted(14);
    this->ActionCompositeRoots.AddDefaulted(14);
}

void UPalAIActionComponent::TerminateCurrentActionByClass(TSubclassOf<UPalAIActionBase> actionClass) {
}

void UPalAIActionComponent::SetWalkSpeed_ForAIAction(EPalMovementSpeedType MoveSpeedType) {
}

void UPalAIActionComponent::SetRootComposite(UPalAIActionCompositeBase* NewCompositeAction, TEnumAsByte<EAIRequestPriority::Type> Priority) {
}

UPalAIActionBase* UPalAIActionComponent::SetActionClassParameter(TSubclassOf<UPalAIActionBase> NewActionClass, FPalAIActionDynamicParameter Parameter) {
    return NULL;
}

void UPalAIActionComponent::SetAction(UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority::Type> Priority, UObject* Instigator) {
}

bool UPalAIActionComponent::IsActionEmpty() {
    return false;
}

bool UPalAIActionComponent::HasAction(const TSubclassOf<UPawnAction>& checkClass, TEnumAsByte<EAIRequestPriority::Type> checkPriority) const {
    return false;
}

UPawnAction* UPalAIActionComponent::GetCurrentTopParentAction_BP() {
    return NULL;
}

EPalAIActionCategory UPalAIActionComponent::GetCurrentAIActionCategory() {
    return EPalAIActionCategory::Undefined;
}

UPawnAction* UPalAIActionComponent::GetCurrentAction_BP() {
    return NULL;
}

UPalAIActionCompositeBase* UPalAIActionComponent::GetCompositeRoot(TEnumAsByte<EAIRequestPriority::Type> Priority) const {
    return NULL;
}

void UPalAIActionComponent::CacheControlledPawn_BP() {
}

void UPalAIActionComponent::AllCancelPushedAction(const UObject* Instigator) {
}

void UPalAIActionComponent::AllCancelActionPriorThanSoftScript(const UObject* Instigator) {
}

void UPalAIActionComponent::AllCancelAction_Logic_HardScript_Reaction(const UObject* Instigator) {
}


