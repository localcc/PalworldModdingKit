#include "PalMapObjectSignboardModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectSignboardModel::UPalMapObjectSignboardModel() {
    this->MenuUIWidgetClass = NULL;
    this->bIsEditing = false;
}

void UPalMapObjectSignboardModel::RequestUpdateText(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectSignboardModel::RequestEditText(const int32 RequestPlayerId, const bool IsEditing) {
}

void UPalMapObjectSignboardModel::OnUpdateText(const FString& Text) {
}

void UPalMapObjectSignboardModel::OnRep_Text() {
}

void UPalMapObjectSignboardModel::OnReceivedWordFilteringResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode) {
}

void UPalMapObjectSignboardModel::OnOpenEdit() {
}

FString UPalMapObjectSignboardModel::GetSignboardText() {
    return TEXT("");
}

void UPalMapObjectSignboardModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectSignboardModel, MenuUIWidgetClass);
    DOREPLIFETIME(UPalMapObjectSignboardModel, SignboardText);
    DOREPLIFETIME(UPalMapObjectSignboardModel, bIsEditing);
}


