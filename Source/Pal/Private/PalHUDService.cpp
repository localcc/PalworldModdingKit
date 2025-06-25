#include "PalHUDService.h"
#include "Templates/SubclassOf.h"

UPalHUDService::UPalHUDService() {
    this->FadeWidget = NULL;
}

void UPalHUDService::StartFadeOut(EPalFadeWidgetLayerType LayerType, UPalHUDDispatchParameter_FadeWidget* FadeParameter) {
}

void UPalHUDService::StartFadeIn(EPalFadeWidgetLayerType LayerType) {
}

bool UPalHUDService::ShowUseItemUI(UPalItemSlot* TargetSlot, UPalHUDDispatchParameter_UseItem* Parameter) {
    return false;
}

void UPalHUDService::ShowCommonWarning(const FPalUICommonWarningDisplayData& WarningDisplayData) {
}

FGuid UPalHUDService::ShowCommonUI(const EPalWidgetBlueprintType WBPType, UPalHUDDispatchParameterBase* Parameter) {
    return FGuid{};
}

void UPalHUDService::ShowCommonReward(const FPalUICommonRewardDisplayData& RewardDisplayData) {
}

void UPalHUDService::ShowCommonItemInfo(const FPalUICommonItemInfoDisplayData& DisplayData) {
}

void UPalHUDService::SetHUDLayerHideFlag(const FGameplayTag& LayerTagName, const FName& HideReasonName, bool IsHide) {
}

void UPalHUDService::RemoveWorldHUDFromWidgetId(const FGuid& ID) {
}

void UPalHUDService::RemoveWorldHUD(const FGuid& ID) {
}

void UPalHUDService::RemoveHUD(const FGuid& ID) {
}

FGuid UPalHUDService::Push(TSubclassOf<UPalUserWidgetStackableUI> WidgetClass, UPalHUDDispatchParameterBase* Parameter) {
    return FGuid{};
}

void UPalHUDService::PlayAkSound(UAkAudioEvent* AkEvent) {
}

bool UPalHUDService::IsAnyOverlayUIActive() {
    return false;
}

void UPalHUDService::InvokeTargetWidgetFunction(const FGuid& WidgetId, const FName FunctionName) {
}

void UPalHUDService::InvokeFunction_Int32(const FName FunctionName, int32 Value) {
}

void UPalHUDService::InvokeFunction_FName(const FName FunctionName, FName Value) {
}

void UPalHUDService::InvokeFunction(const FName FunctionName) {
}

void UPalHUDService::HideCommonWarning(const FGuid PreserveID) {
}

void UPalHUDService::HideCommonReward() {
}

void UPalHUDService::HideCommonItemInfo() {
}

bool UPalHUDService::HasFadeQueue(EPalFadeWidgetLayerType InLayerType) const {
    return false;
}

UPalUserWidgetStackableUI* UPalHUDService::GetWidget(const FGuid& WidgetId) {
    return NULL;
}

UPalSoundPlayer* UPalHUDService::GetSoundPlayer() {
    return NULL;
}

UPalUILiftSlotModel* UPalHUDService::GetLiftSlotModel() {
    return NULL;
}

void UPalHUDService::DeactivateFocusCursor() {
}

UPalHUDDispatchParameterBase* UPalHUDService::CreateDispatchParameterForK2Node(const UObject* WorldContextObject, TSubclassOf<UPalHUDDispatchParameterBase> ParameterClass) {
    return NULL;
}

void UPalHUDService::CloseOwnerStackableUI(const UObject* InObject) {
}

void UPalHUDService::CloseOverlayUIAll() {
}

void UPalHUDService::Close(const FGuid& ID) {
}

void UPalHUDService::ClearFadeQueue() {
}

FGuid UPalHUDService::AddWorldHUD(FPalWorldHUDParameter Parameter) {
    return FGuid{};
}

FGuid UPalHUDService::AddHUD(TSubclassOf<UPalUserWidget> WidgetClass, const EPalHUDWidgetPriority Priority, UPalHUDDispatchParameterBase* Parameter) {
    return FGuid{};
}

void UPalHUDService::ActivatePlayerInputGuard() {
}

void UPalHUDService::ActivateFocusCursor(UWidget* TargetWidget) {
}


