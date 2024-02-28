#include "PalActionComponent.h"
#include "Templates/SubclassOf.h"

UPalActionComponent::UPalActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CurrentAction = NULL;
}

UPalActionBase* UPalActionComponent::PlayActionParameter(FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass) {
    return NULL;
}

UPalActionBase* UPalActionComponent::PlayActionLocationByType(FVector Location, EPalActionType Type) {
    return NULL;
}

UPalActionBase* UPalActionComponent::PlayActionLocation(FVector Location, TSubclassOf<UPalActionBase> actionClass) {
    return NULL;
}

UPalActionBase* UPalActionComponent::PlayActionByTypeParameter(FActionDynamicParameter Param, EPalActionType Type) {
    return NULL;
}

UPalActionBase* UPalActionComponent::PlayActionByType(AActor* ActionTarget, EPalActionType Type) {
    return NULL;
}

void UPalActionComponent::PlayAction_ToServer_Implementation(FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass, int32 issuerID) {
}

void UPalActionComponent::PlayAction_ToALL_Implementation(FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass, int32 issuerID) {
}

UPalActionBase* UPalActionComponent::PlayAction_LocalOnly(FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass) {
    return NULL;
}

UPalActionBase* UPalActionComponent::PlayAction_Internal(FActionDynamicParameter Param, TSubclassOf<UPalActionBase> actionClass) {
    return NULL;
}

UPalActionBase* UPalActionComponent::PlayAction(AActor* ActionTarget, TSubclassOf<UPalActionBase> actionClass) {
    return NULL;
}

void UPalActionComponent::OnOwnerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> reasonType) {
}

void UPalActionComponent::OnCompleteCharacter(APalCharacter* InCharacter) {
}

EPalActionType UPalActionComponent::GetCurrentActionType() const {
    return EPalActionType::None;
}

UPalActionBase* UPalActionComponent::GetCurrentAction() const {
    return NULL;
}

void UPalActionComponent::CancelAllAction_ToServer_Implementation(int32 ID) {
}

void UPalActionComponent::CancelAllAction_ToALL_Implementation(int32 ID) {
}

void UPalActionComponent::CancelAllAction_Internal() {
}

void UPalActionComponent::CancelAllAction() {
}

void UPalActionComponent::CancelActionByType(EPalActionType Type) {
}

void UPalActionComponent::CancelAction_ToServer_Implementation(int32 ID, FGuid ActionID) {
}

void UPalActionComponent::CancelAction_ToALL_Implementation(int32 ID, FGuid ActionID) {
}

void UPalActionComponent::CancelAction_Internal(FGuid ActionID) {
}

void UPalActionComponent::CancelAction(UPalActionBase* action) {
}

void UPalActionComponent::BeginPlay() {
}

bool UPalActionComponent::ActionIsEmpty() {
    return false;
}


