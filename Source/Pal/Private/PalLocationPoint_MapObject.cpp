#include "PalLocationPoint_MapObject.h"
#include "Net/UnrealNetwork.h"

UPalLocationPoint_MapObject::UPalLocationPoint_MapObject() {
}

void UPalLocationPoint_MapObject::OnDisposeTarget(UPalMapObjectModel* Model, const FPalMapObjectDisposeOptions& Options) {
}

bool UPalLocationPoint_MapObject::GetMapObjectName(FName& MapObjectName) const {
    return false;
}

void UPalLocationPoint_MapObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalLocationPoint_MapObject, MapObjectModelId);
    DOREPLIFETIME(UPalLocationPoint_MapObject, InitialLocationCache);
}


