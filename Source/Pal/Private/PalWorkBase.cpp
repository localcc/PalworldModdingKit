#include "PalWorkBase.h"
#include "Net/UnrealNetwork.h"

UPalWorkBase::UPalWorkBase() {
    this->OverrideWorkType = EPalWorkType::None;
    this->BehaviourType = EPalWorkBehaviourType::StackAmount;
    this->AssignableFixedType = EPalWorkAssignableFixedType::Both;
    this->bAssignableOtomo = true;
    this->bCanTriggerWorkerEvent = true;
    this->bCanStealAssign = true;
    this->CurrentState = EPalWorkProgressState::Init;
    this->Transform = NULL;
    this->bGroupRaycastStartOffsetOrigin = false;
}

void UPalWorkBase::OnRep_CurrentState() {
}

void UPalWorkBase::IssueNotifierLog_WorkStart(const UPalCharacterParameterComponent* CharacterParameter) {
}

bool UPalWorkBase::IsExistAssignableSlot(const UPalIndividualCharacterHandle* AssignIndividualHandle, const bool bByFixedAssign) const {
    return false;
}

bool UPalWorkBase::IsAssignedCharacter(const UPalIndividualCharacterHandle* IndividualHandle) const {
    return false;
}

bool UPalWorkBase::IsAssignableFixedOnly() const {
    return false;
}

FText UPalWorkBase::GetWorkName() const {
    return FText::GetEmpty();
}

FGuid UPalWorkBase::GetWorkId() const {
    return FGuid{};
}

void UPalWorkBase::GetWorkAssignInfo(TArray<FPalWorkAssignInfo>& OutWorkAssignInfo) const {
}

void UPalWorkBase::GetWorkableElementTypeNames(TArray<FText>& outElementNames) const {
}

FGuid UPalWorkBase::GetId() const {
    return FGuid{};
}

void UPalWorkBase::GetGenusCategorieNames(TArray<FText>& outGenusCategorieNames) const {
}

void UPalWorkBase::GetAssignedCharacters(TArray<UPalIndividualCharacterSlot*>& IndividualSlots) const {
}

EPalWorkAssignableFixedType UPalWorkBase::GetAssignableFixedType() const {
    return EPalWorkAssignableFixedType::Both;
}

void UPalWorkBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWorkBase, AssignDefineDataId);
    DOREPLIFETIME(UPalWorkBase, OverrideWorkType);
    DOREPLIFETIME(UPalWorkBase, AssignLocations);
    DOREPLIFETIME(UPalWorkBase, BaseCampIdBelongTo);
    DOREPLIFETIME(UPalWorkBase, OwnerMapObjectModelId);
    DOREPLIFETIME(UPalWorkBase, OwnerMapObjectConcreteModelId);
    DOREPLIFETIME(UPalWorkBase, BehaviourType);
    DOREPLIFETIME(UPalWorkBase, AssignableFixedType);
    DOREPLIFETIME(UPalWorkBase, bAssignableOtomo);
    DOREPLIFETIME(UPalWorkBase, ID);
    DOREPLIFETIME(UPalWorkBase, CurrentState);
    DOREPLIFETIME(UPalWorkBase, Transform);
    DOREPLIFETIME(UPalWorkBase, AssignRepInfoArray);
}


