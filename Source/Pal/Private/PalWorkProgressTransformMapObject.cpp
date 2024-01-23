#include "PalWorkProgressTransformMapObject.h"
#include "Net/UnrealNetwork.h"

void UPalWorkProgressTransformMapObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWorkProgressTransformMapObject, MapObjectInstanceId);
}

UPalWorkProgressTransformMapObject::UPalWorkProgressTransformMapObject() {
    this->bCached = false;
    this->bShouldSearchForFoliage = true;
}

