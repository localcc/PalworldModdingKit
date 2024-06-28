#include "PalMapObjectConcreteModelBase.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectConcreteModelBase::UPalMapObjectConcreteModelBase() {
    this->bDisposed = false;
    this->WorkeeModuleCache = NULL;
}

FName UPalMapObjectConcreteModelBase::TryGetMapObjectId() {
    return NAME_None;
}

void UPalMapObjectConcreteModelBase::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void UPalMapObjectConcreteModelBase::OnTriggeringInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType, const float DeltaTime) {
}

void UPalMapObjectConcreteModelBase::OnStartTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void UPalMapObjectConcreteModelBase::OnRep_ModuleArray() {
}

void UPalMapObjectConcreteModelBase::OnEndTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

UPalMapObjectWorkeeModule* UPalMapObjectConcreteModelBase::GetWorkeeModule() const {
    return NULL;
}

FTransform UPalMapObjectConcreteModelBase::GetTransform() const {
    return FTransform{};
}

UPalMapObjectSwitchModule* UPalMapObjectConcreteModelBase::GetSwitchModule() const {
    return NULL;
}

UPalMapObjectPasswordLockModule* UPalMapObjectConcreteModelBase::GetPasswordLockModule() const {
    return NULL;
}

void UPalMapObjectConcreteModelBase::GetMapObjectLocation(FVector& outVector) {
}

UPalMapObjectItemContainerModule* UPalMapObjectConcreteModelBase::GetItemContainerModule() const {
    return NULL;
}

FGuid UPalMapObjectConcreteModelBase::GetInstanceId() const {
    return FGuid{};
}

UPalMapObjectEnergyModule* UPalMapObjectConcreteModelBase::GetEnergyModule() const {
    return NULL;
}

UPalMapObjectCharacterContainerModule* UPalMapObjectConcreteModelBase::GetCharacterContainerModule() const {
    return NULL;
}

UPalBaseCampModel* UPalMapObjectConcreteModelBase::GetBaseCampModelBelongTo() const {
    return NULL;
}

FGuid UPalMapObjectConcreteModelBase::GetBaseCampIdBelongTo() const {
    return FGuid{};
}

APalMapObject* UPalMapObjectConcreteModelBase::GetActor() const {
    return NULL;
}

void UPalMapObjectConcreteModelBase::CallOrRegisterOnReadyModule(const EPalMapObjectConcreteModelModuleType ModuleType, FPalMapObjectModuleDelegate Delegate) {
}

void UPalMapObjectConcreteModelBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectConcreteModelBase, InstanceId);
    DOREPLIFETIME(UPalMapObjectConcreteModelBase, ModelInstanceId);
    DOREPLIFETIME(UPalMapObjectConcreteModelBase, bDisposed);
    DOREPLIFETIME(UPalMapObjectConcreteModelBase, ModuleRepInfoArray);
}


