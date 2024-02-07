#include "PalBaseCampMapObjectCollection.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampMapObjectCollection::UPalBaseCampMapObjectCollection() {
}

void UPalBaseCampMapObjectCollection::OnNotAvailableConcreteModel(UPalMapObjectConcreteModelBase* Model) {
}

void UPalBaseCampMapObjectCollection::OnDisposeMapObject(UPalMapObjectModel* Model, const FPalMapObjectDisposeOptions& Options) {
}

void UPalBaseCampMapObjectCollection::OnAvailableConcreteModel(UPalMapObjectConcreteModelBase* Model) {
}

void UPalBaseCampMapObjectCollection::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampMapObjectCollection, MapObjectInstanceIds);
}


