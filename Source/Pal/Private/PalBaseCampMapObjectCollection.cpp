#include "PalBaseCampMapObjectCollection.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampMapObjectCollection::UPalBaseCampMapObjectCollection() {
}

void UPalBaseCampMapObjectCollection::OnTriggeredBurnAnyMapObject(UPalMapObjectModelEffect_AccumulateTrigger* Self, UPalMapObjectModel* OwnerModel) {
}

void UPalBaseCampMapObjectCollection::OnRemovedEffectAnyMapObject(UPalMapObjectModel* OwnerModel, UPalMapObjectModelEffectBase* Effect, EPalStatusID StatusId) {
}

void UPalBaseCampMapObjectCollection::OnNotAvailableConcreteModel(UPalMapObjectConcreteModelBase* Model) {
}

void UPalBaseCampMapObjectCollection::OnGrantedEffectAnyMapObject(UPalMapObjectModel* OwnerModel, UPalMapObjectModelEffectBase* Effect) {
}

void UPalBaseCampMapObjectCollection::OnDisposeMapObject(UPalMapObjectModel* Model, const FPalMapObjectDisposeOptions& Options) {
}

void UPalBaseCampMapObjectCollection::OnAvailableConcreteModel(UPalMapObjectConcreteModelBase* Model) {
}

void UPalBaseCampMapObjectCollection::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampMapObjectCollection, MapObjectInstanceIds);
}


