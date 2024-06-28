#include "PalOtomoHolderComponentBase.h"
#include "Net/UnrealNetwork.h"

UPalOtomoHolderComponentBase::UPalOtomoHolderComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CollisionChecker = NULL;
    this->OtomoOrder = EPalOtomoPalOrderType::Default;
    this->CharacterContainer = NULL;
    this->bIsDisableDespawnCharacter = false;
    this->bDisableDeadReturnOtomo = false;
}

UPalIndividualCharacterHandle* UPalOtomoHolderComponentBase::TryGetSpawnedOtomoHandle() const {
    return NULL;
}

APalCharacter* UPalOtomoHolderComponentBase::TryGetSpawnedOtomo() const {
    return NULL;
}

APawn* UPalOtomoHolderComponentBase::TryGetOwnerControlledPawn() const {
    return NULL;
}

APalCharacter* UPalOtomoHolderComponentBase::TryGetOwnerControlledCharacter() const {
    return NULL;
}

APalCharacter* UPalOtomoHolderComponentBase::TryGetOtomoActorBySlotIndex(const int32 SlotIndex) const {
    return NULL;
}

void UPalOtomoHolderComponentBase::TryGetLoadedOtomoData(bool& bLoaded, TMap<FPalInstanceID, FPalIndividualCharacterSaveParameter>& OutParameterMap) {
}


bool UPalOtomoHolderComponentBase::TryGetContainer(UPalIndividualCharacterContainer*& Container) const {
    return false;
}


void UPalOtomoHolderComponentBase::Tmp_EmptySlot(const FPalCharacterSlotId& SlotID) {
}


void UPalOtomoHolderComponentBase::SetSelectOtomoID_ToServer_Implementation(int32 ID, int32 Index) {
}

void UPalOtomoHolderComponentBase::SetSelectOtomoID_ToALL_Implementation(int32 ID, int32 Index) {
}


void UPalOtomoHolderComponentBase::SetSelectOtomoID(int32 Index) {
}

void UPalOtomoHolderComponentBase::SetOtomoOrder_ToServer_Implementation(EPalOtomoPalOrderType OrderType) {
}

void UPalOtomoHolderComponentBase::SetInteractComponent_Implementation(AActor* SpawnPal) {
}

void UPalOtomoHolderComponentBase::SetDisableDeadReturnOtomo(bool bDisable) {
}

void UPalOtomoHolderComponentBase::OnUpdateSlot(UPalIndividualCharacterSlot* Slot, UPalIndividualCharacterHandle* LastHandle) {
}

void UPalOtomoHolderComponentBase::OnUpdateIndividualActor(UPalIndividualCharacterHandle* LastHandle) {
}

void UPalOtomoHolderComponentBase::OnSpawnOtomoCallback_ServerInternal(FPalInstanceID ID) {
}

void UPalOtomoHolderComponentBase::OnSpawnDebugOtomoCallback_ServerInternal(FPalInstanceID ID) {
}

void UPalOtomoHolderComponentBase::OnReplicated_CharacterContainer_AllSlots(UPalIndividualCharacterContainer* Container) {
}

void UPalOtomoHolderComponentBase::OnRep_CharacterContainer() {
}

void UPalOtomoHolderComponentBase::OnInitializedCharacter(APalCharacter* Character) {
}

void UPalOtomoHolderComponentBase::OnCreatedCharacterContainer_Implementation() {
}

void UPalOtomoHolderComponentBase::OnChangeOtomoActive(APalCharacter* Otomo, bool IsActive) {
}

void UPalOtomoHolderComponentBase::LostOtomoByID_ToClient_Implementation(FPalInstanceID ID) const {
}




bool UPalOtomoHolderComponentBase::IsFullMember() const {
    return false;
}

bool UPalOtomoHolderComponentBase::IsDeadSelectedOtomo() {
    return false;
}

bool UPalOtomoHolderComponentBase::IsCreatedOtomoContainer() const {
    return false;
}

bool UPalOtomoHolderComponentBase::IsControlledByPlayer() const {
    return false;
}

bool UPalOtomoHolderComponentBase::IsALLEmpty() const {
    return false;
}

bool UPalOtomoHolderComponentBase::IsAllDeadOtomo() {
    return false;
}


void UPalOtomoHolderComponentBase::Initialize_ServerInternal() {
}

void UPalOtomoHolderComponentBase::Initialize() {
}

void UPalOtomoHolderComponentBase::IncrementSelectOtomoID_ToServer_Implementation(int32 ID) {
}

void UPalOtomoHolderComponentBase::IncrementSelectOtomoID_ToALL_Implementation(int32 ID) {
}


void UPalOtomoHolderComponentBase::IncrementSelectOtomoID() {
}

void UPalOtomoHolderComponentBase::InactiveOtomoByHandle_PreProcess(UPalIndividualCharacterHandle* Handle) {
}



FTransform UPalOtomoHolderComponentBase::GetTransform_SpawnPalNearTrainer() {
    return FTransform{};
}


void UPalOtomoHolderComponentBase::GetSlots(TArray<UPalIndividualCharacterSlot*>& Slots) const {
}

int32 UPalOtomoHolderComponentBase::GetSlotIndexByIndividualHandle(const UPalIndividualCharacterHandle* IndividualHandle) const {
    return 0;
}



EPalOtomoPalOrderType UPalOtomoHolderComponentBase::GetOtomoOrder() const {
    return EPalOtomoPalOrderType::Default;
}

UPalIndividualCharacterHandle* UPalOtomoHolderComponentBase::GetOtomoIndividualHandle(const int32 SlotIndex) const {
    return NULL;
}

UPalIndividualCharacterSlot* UPalOtomoHolderComponentBase::GetOtomoIndividualCharacterSlot_Internal(const int32 SlotIndex) const {
    return NULL;
}

UPalIndividualCharacterSlot* UPalOtomoHolderComponentBase::GetOtomoIndividualCharacterSlot(const int32 SlotIndex) const {
    return NULL;
}

int32 UPalOtomoHolderComponentBase::GetOtomoCount() const {
    return 0;
}



APalCharacter* UPalOtomoHolderComponentBase::GetEnemyWhenOtomoThrow(FVector OtomoAppearedLocation) {
    return NULL;
}

UPalIndividualCharacterSlot* UPalOtomoHolderComponentBase::GetEmptySlot() const {
    return NULL;
}

void UPalOtomoHolderComponentBase::GetAllIndividualHandle(TArray<UPalIndividualCharacterHandle*>& OutArray) const {
}

void UPalOtomoHolderComponentBase::DecrementSelectOtomoID_ToServer_Implementation(int32 ID) {
}

void UPalOtomoHolderComponentBase::DecrementSelectOtomoID_ToALL_Implementation(int32 ID) {
}


void UPalOtomoHolderComponentBase::DecrementSelectOtomoID() {
}


void UPalOtomoHolderComponentBase::CompleteInactiveCurrentOtomo() {
}


bool UPalOtomoHolderComponentBase::AddOtomoHandleToFreeSlot(UPalIndividualCharacterHandle* Handle) {
    return false;
}

void UPalOtomoHolderComponentBase::AddLogOtomoPartnerSkill_Waza_ToClient_Implementation(AActor* Otomo, EPalLogType PalLogType) {
}

void UPalOtomoHolderComponentBase::AddLogOtomoPartnerSkill_ToClient_Implementation(AActor* Otomo, EPalLogType PalLogType, int32 Value, bool AddSkillName) {
}

void UPalOtomoHolderComponentBase::AddLogOtomoPartnerSkill_Text_ToClient_Implementation(AActor* Otomo, FName textID) {
}



void UPalOtomoHolderComponentBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalOtomoHolderComponentBase, OtomoOrder);
    DOREPLIFETIME(UPalOtomoHolderComponentBase, CharacterContainer);
}


