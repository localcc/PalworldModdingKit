#include "PalAIActionBase.h"
#include "Templates/SubclassOf.h"

UPalAIActionBase::UPalAIActionBase() {
    this->bIsAutoStopBehaviorTree = true;
    this->AiActionCategory = EPalAIActionCategory::Undefined;
    this->DefaultPriority = EAIRequestPriority::SoftScript;
}

void UPalAIActionBase::SetWalkSpeed_ForAIAction(EPalMovementSpeedType MoveSpeedType) {
}

UPalAIActionBase* UPalAIActionBase::SetAIActionClassParameter(TSubclassOf<UPalAIActionBase> NewActionClass, FPalAIActionDynamicParameter Parameter) {
    return NULL;
}

bool UPalAIActionBase::PushChildAction(UPawnAction* action) {
    return false;
}


bool UPalAIActionBase::IsPaused() const {
    return false;
}

bool UPalAIActionBase::IsActive() const {
    return false;
}

FString UPalAIActionBase::GetSimpleName() const {
    return TEXT("");
}

EAIRequestPriority::Type UPalAIActionBase::GetRequestPriority_Implementation() const {
    return EAIRequestPriority::SoftScript;
}

APalAIController* UPalAIActionBase::GetPalAIController() const {
    return NULL;
}

UPawnActionsComponent* UPalAIActionBase::GetOwnerComponent() {
    return NULL;
}

AController* UPalAIActionBase::GetController() const {
    return NULL;
}

UPalCharacterParameterComponent* UPalAIActionBase::GetCharacterParameter() const {
    return NULL;
}

APalCharacter* UPalAIActionBase::GetCharacter() const {
    return NULL;
}

UPalAIActionComponent* UPalAIActionBase::GetAIActionComponent() const {
    return NULL;
}

UPalActionComponent* UPalAIActionBase::GetActionComponent() const {
    return NULL;
}

UPawnAction* UPalAIActionBase::CreateActionInstanceFixName(UObject* WorldContextObject, TSubclassOf<UPawnAction> actionClass, FName ActionName) {
    return NULL;
}



