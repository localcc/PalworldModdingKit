#include "PalBaseCampWorkerDirector.h"
#include "Net/UnrealNetwork.h"

UPalBaseCampWorkerDirector::UPalBaseCampWorkerDirector() {
    this->CharacterContainer = NULL;
    this->CurrentOrderType = EPalMapBaseCampWorkerOrderType::Work;
    this->CurrentBattleType = EPalBaseCampWorkerDirectionBattleType::FirstValue;
    this->SlotObserverForServer = NULL;
    this->BattleDirector = NULL;
    this->WorkerEventTickCount = 0;
    this->State = EPalBaseCampWorkerDirectorState::Init;
}

void UPalBaseCampWorkerDirector::OrderCommand(const EPalMapBaseCampWorkerOrderType OrderType) {
}

void UPalBaseCampWorkerDirector::OnUpdateOwnerBaseCampStatus_ServerInternal(UPalBaseCampModel* OwnerBaseCamp) {
}

void UPalBaseCampWorkerDirector::OnSpawnedCharacterInServer(FPalInstanceID IndividualId) {
}

void UPalBaseCampWorkerDirector::OnRequiredAssignWork_ServerInternal(UPalWorkBase* Work, const FPalWorkAssignRequirementParameter& RequirementParameter) {
}

void UPalBaseCampWorkerDirector::OnRep_CharacterContainer() {
}

void UPalBaseCampWorkerDirector::OnRemovedNewCharacterInServer(const FPalInstanceID& IndividualId) {
}

void UPalBaseCampWorkerDirector::OnReflectSlotCompleteInServer() {
}

void UPalBaseCampWorkerDirector::OnRaisedPhantomCharacterInServer(FPalInstanceID IndividualId, int32 PhantomId) {
}

void UPalBaseCampWorkerDirector::OnNotifiedUnassignWork_ServerInternal(UPalWorkBase* Work, const FPalInstanceID& IndividualId) {
}

void UPalBaseCampWorkerDirector::OnDeadWorkerInServer_Internal(APalCharacter* DeadCharacter) {
}

void UPalBaseCampWorkerDirector::OnDeadWorkerInServer(const FPalDeadInfo Info) {
}

void UPalBaseCampWorkerDirector::OnChangeWorldSettings_ServerInternal(const FPalOptionWorldSettings& PrevSettings, const FPalOptionWorldSettings& NewSettings) {
}

void UPalBaseCampWorkerDirector::OnAddedNewCharacterInServer(const FPalInstanceID& IndividualId) {
}

void UPalBaseCampWorkerDirector::GetCharacterHandleSlots(TArray<UPalIndividualCharacterSlot*>& OutSlots) const {
}

UPalIndividualCharacterSlot* UPalBaseCampWorkerDirector::FindSlotByHandle(UPalIndividualCharacterHandle* Handle) const {
    return NULL;
}

void UPalBaseCampWorkerDirector::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalBaseCampWorkerDirector, CharacterContainer);
    DOREPLIFETIME(UPalBaseCampWorkerDirector, CurrentBattleType);
}


