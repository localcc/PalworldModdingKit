#include "PalWorkProgressTransformMapObject.h"
#include "Net/UnrealNetwork.h"

UPalWorkProgressTransformMapObject::UPalWorkProgressTransformMapObject() {
    this->bCached = false;
    this->bShouldSearchForFoliage = true;
}

void UPalWorkProgressTransformMapObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWorkProgressTransformMapObject, MapObjectInstanceId);
}


