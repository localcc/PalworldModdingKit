#include "PalMapObjectModel.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModel::UPalMapObjectModel() {
    this->ConcreteModel = NULL;
    this->BuildProcess = NULL;
    this->DamagableType = EPalMapObjectDamagableType::AllRecieve;
    this->Connector = NULL;
    this->Effect = NULL;
    this->bInDoor = false;
    this->InteractRestrictType = EPalMapObjectInteractRestrictType::Anyone;
    this->SignificanceValue = 0.00f;
    this->DeteriorationDamage = 0.00f;
    this->DeteriorationTotalDamage = 0.00f;
    this->bIgnoredSave = false;
}

void UPalMapObjectModel::RequestRepairByPlayer_ToServer_ServerInternal(const FGuid& RequestPlayerUId) {
}

void UPalMapObjectModel::OnUpdateBuildProcess_ServerInternal(UPalBuildProcess* TargetBuildProcess) {
}

void UPalMapObjectModel::OnUnassignWorkRepairBuildObject(UPalWorkBase* Work, const FPalInstanceID& IndividualId) {
}

void UPalMapObjectModel::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void UPalMapObjectModel::OnTriggeringInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType, float DeltaTime) {
}

void UPalMapObjectModel::OnStartTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void UPalMapObjectModel::OnRep_Effect() {
}

void UPalMapObjectModel::OnRep_ConcreteModel() {
}

void UPalMapObjectModel::OnRep_BuildPlayerUId() {
}

void UPalMapObjectModel::OnEndTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void UPalMapObjectModel::OnAssignWorkRepairBuildObject(UPalWorkBase* Work, UPalWorkAssign* WorkAssign) {
}

bool UPalMapObjectModel::IsDamaged() const {
    return false;
}

FPalMapObjectStatusValue UPalMapObjectModel::GetHP() const {
    return FPalMapObjectStatusValue{};
}

void UPalMapObjectModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModel, InstanceId);
    DOREPLIFETIME(UPalMapObjectModel, MapObjectMasterDataId);
    DOREPLIFETIME(UPalMapObjectModel, ConcreteModelInstanceId);
    DOREPLIFETIME(UPalMapObjectModel, ConcreteModel);
    DOREPLIFETIME(UPalMapObjectModel, BaseCampIdBelongTo);
    DOREPLIFETIME(UPalMapObjectModel, GroupIdBelongTo);
    DOREPLIFETIME(UPalMapObjectModel, BuildObjectId);
    DOREPLIFETIME(UPalMapObjectModel, BuildProcess);
    DOREPLIFETIME(UPalMapObjectModel, DamagableType);
    DOREPLIFETIME(UPalMapObjectModel, HP);
    DOREPLIFETIME(UPalMapObjectModel, InitialTransformCache);
    DOREPLIFETIME(UPalMapObjectModel, Connector);
    DOREPLIFETIME(UPalMapObjectModel, Effect);
    DOREPLIFETIME(UPalMapObjectModel, BuildPlayerUId);
    DOREPLIFETIME(UPalMapObjectModel, InteractRestrictType);
}


