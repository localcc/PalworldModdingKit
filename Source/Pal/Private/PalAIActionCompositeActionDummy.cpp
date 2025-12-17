#include "PalAIActionCompositeActionDummy.h"

UPalAIActionCompositeActionDummy::UPalAIActionCompositeActionDummy() {
}

void UPalAIActionCompositeActionDummy::OnResumeAction(UPalAIActionBase* action) {
}

void UPalAIActionCompositeActionDummy::OnPauseAction(UPalAIActionBase* action, const UPawnAction* PausedBy) {
}

void UPalAIActionCompositeActionDummy::OnFinishAction(UPalAIActionBase* action) {
}

FString UPalAIActionCompositeActionDummy::GetActionClassName() const {
    return TEXT("");
}


