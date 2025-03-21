#include "PalDynamicItemDataBase.h"
#include "Net/UnrealNetwork.h"

UPalDynamicItemDataBase::UPalDynamicItemDataBase() {
    this->bIgnoreOnSave = false;
}

FName UPalDynamicItemDataBase::GetStaticId() const {
    return NAME_None;
}

FPalDynamicItemId UPalDynamicItemDataBase::GetId() const {
    return FPalDynamicItemId{};
}

void UPalDynamicItemDataBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalDynamicItemDataBase, ID);
    DOREPLIFETIME(UPalDynamicItemDataBase, StaticId);
}


