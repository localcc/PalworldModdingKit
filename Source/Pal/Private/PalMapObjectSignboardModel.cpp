#include "PalMapObjectSignboardModel.h"
#include "Net/UnrealNetwork.h"

void UPalMapObjectSignboardModel::RequestUpdateText(const int32 RequestPlayerId, const FPalNetArchive& Archive) {
}

void UPalMapObjectSignboardModel::RequestEditText(const int32 RequestPlayerId, const bool IsEditing) {
}

void UPalMapObjectSignboardModel::OnUpdateText(const FString& Text) {
}

void UPalMapObjectSignboardModel::OnRep_Text() {
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

UPalMapObjectSignboardModel::UPalMapObjectSignboardModel() {
    this->MenuUIWidgetClass = NULL;
    this->bIsEditing = false;
}

