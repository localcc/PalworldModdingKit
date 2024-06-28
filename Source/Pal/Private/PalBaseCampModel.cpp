#include "PalBaseCampModel.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampModel::UPalBaseCampModel() {
    this->CurrentState = EPalBaseCampState::NotAvailable;
    this->AreaRange = 0.00f;
    this->WorkerDirector = NULL;
    this->MapObjectCollection = NULL;
    this->WorkCollection = NULL;
    this->EnemyObserver = NULL;
    this->Level_InGuildProperty = 1;
    this->ProgressTimeSinceLastTick = 0.00f;
}

void UPalBaseCampModel::UpdateLevel_ServerInternal(int32 PlayerId, int32 NewLevel) {
}

bool UPalBaseCampModel::TryGetRandomPositionInside(const FVector& Origin, const float Radius, FVector& ToLocation) const {
    return false;
}

void UPalBaseCampModel::ReflectLevel_InGuildProperty_Internal(int32 NewLevel) {
}

void UPalBaseCampModel::OnRep_Level_InGuildProperty(int32 OldLevel) {
}

void UPalBaseCampModel::OnPassedTimeAfterEmptyEnemy() {
}

void UPalBaseCampModel::OnFirstAppearEnemy() {
}

void UPalBaseCampModel::OnDamageInCampActor(FPalDamageResult DamageResult) {
}

void UPalBaseCampModel::OnAddNewWorker(UPalIndividualCharacterHandle* AddCharacterHandle) {
}

bool UPalBaseCampModel::IsAvailable() const {
    return false;
}

UPalBaseCampWorkCollection* UPalBaseCampModel::GetWorkCollection() const {
    return NULL;
}

FTransform UPalBaseCampModel::GetTransform() const {
    return FTransform{};
}

EPalBaseCampState UPalBaseCampModel::GetState() const {
    return EPalBaseCampState::NotAvailable;
}

float UPalBaseCampModel::GetRange() const {
    return 0.0f;
}

FGuid UPalBaseCampModel::GetOwnerMapObjectInstanceId() const {
    return FGuid{};
}

int32 UPalBaseCampModel::GetLevel() const {
    return 0;
}

FGuid UPalBaseCampModel::GetId() const {
    return FGuid{};
}

FGuid UPalBaseCampModel::GetGroupIdBelongTo() const {
    return FGuid{};
}

UPalBaseCampEnemyObserver* UPalBaseCampModel::GetEnemyObserver() const {
    return NULL;
}

FString UPalBaseCampModel::GetBaseCampName() const {
    return TEXT("");
}

bool UPalBaseCampModel::FindWorkAssignableObject(const UPalIndividualCharacterHandle* AssignIndividualHandle, const FGuid& WorkId, const bool bFixedAssign, UPalWorkBase*& FoundObject) {
    return false;
}

bool UPalBaseCampModel::FindNearestAssignableObject(const UPalIndividualCharacterHandle* AssignIndividualHandle, const FTransform& Origin, const float Range, const bool bFixedAssign, TScriptInterface<IPalBaseCampAssignableObjectInterface>& FoundObject) {
    return false;
}

void UPalBaseCampModel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampModel, ID);
    DOREPLIFETIME(UPalBaseCampModel, BaseCampName);
    DOREPLIFETIME(UPalBaseCampModel, CurrentState);
    DOREPLIFETIME(UPalBaseCampModel, Transform);
    DOREPLIFETIME(UPalBaseCampModel, AreaRange);
    DOREPLIFETIME(UPalBaseCampModel, GroupIdBelongTo);
    DOREPLIFETIME(UPalBaseCampModel, FastTravelLocalTransform);
    DOREPLIFETIME(UPalBaseCampModel, WorkerDirector);
    DOREPLIFETIME(UPalBaseCampModel, MapObjectCollection);
    DOREPLIFETIME(UPalBaseCampModel, WorkCollection);
    DOREPLIFETIME(UPalBaseCampModel, ModuleArray);
    DOREPLIFETIME(UPalBaseCampModel, PlayerUIdsExistsInsideInServer);
    DOREPLIFETIME(UPalBaseCampModel, OwnerMapObjectInstanceId);
    DOREPLIFETIME(UPalBaseCampModel, Level_InGuildProperty);
}


