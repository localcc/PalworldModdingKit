#include "PalHUDService.h"
#include "Templates/SubclassOf.h"

UPalHUDService::UPalHUDService() {
}

void UPalHUDService::StartFadeOut(EPalFadeWidgetLayerType LayerType) {
}

void UPalHUDService::StartFadeIn(EPalFadeWidgetLayerType LayerType, UPalHUDDispatchParameter_FadeWidget* FadeParameter) {
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

void UPalHUDService::InvokeFunction_Int32(const FName FunctionName, int32 Value) {
}

void UPalHUDService::InvokeFunction_FName(const FName FunctionName, FName Value) {
}

void UPalHUDService::InvokeFunction(const FName FunctionName) {
}

void UPalHUDService::HideCommonItemInfo() {
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


