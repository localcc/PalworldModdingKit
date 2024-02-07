#include "PalAIActionCompositeBase.h"

UPalAIActionCompositeBase::UPalAIActionCompositeBase() {
    this->Child = NULL;
    this->OwnerComponent = NULL;
}

void UPalAIActionCompositeBase::SetChildActionComposite(UPalAIActionCompositeBase* Composite) {
}

void UPalAIActionCompositeBase::SetChildAction(UPalAIActionBase* action, UObject* Instigator) {
}

bool UPalAIActionCompositeBase::IsPaused() const {
    return false;
}

APawn* UPalAIActionCompositeBase::GetPawn() const {
    return NULL;
}

UPalAIActionComponent* UPalAIActionCompositeBase::GetOwnerComponent() const {
    return NULL;
}

AController* UPalAIActionCompositeBase::GetController() const {
    return NULL;
}

UPalAIActionCompositeBase* UPalAIActionCompositeBase::GetChild() const {
    return NULL;
}

UPalCharacterParameterComponent* UPalAIActionCompositeBase::GetCharacterParameter() const {
    return NULL;
}

UPalActionComponent* UPalAIActionCompositeBase::GetActionComponent() const {
    return NULL;
}


