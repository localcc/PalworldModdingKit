#include "AsyncAction_ShowConfirmation.h"

UAsyncAction_ShowConfirmation::UAsyncAction_ShowConfirmation() {
    this->WorldContextObject = NULL;
    this->TargetLocalPlayer = NULL;
    this->Descriptor = NULL;
}

UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationYesNo(UObject* InWorldContextObject, FText Title, FText Message) {
    return NULL;
}

UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationOkCancel(UObject* InWorldContextObject, FText Title, FText Message) {
    return NULL;
}

UAsyncAction_ShowConfirmation* UAsyncAction_ShowConfirmation::ShowConfirmationCustom(UObject* InWorldContextObject, UCommonGameDialogDescriptor* NewDescriptor) {
    return NULL;
}


