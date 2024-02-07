#include "CommonUIExtensions.h"
#include "Templates/SubclassOf.h"

UCommonUIExtensions::UCommonUIExtensions() {
}

FName UCommonUIExtensions::SuspendInputForPlayer(APlayerController* PlayerController, FName SuspendReason) {
    return NAME_None;
}

void UCommonUIExtensions::ResumeInputForPlayer(APlayerController* PlayerController, FName SuspendToken) {
}

void UCommonUIExtensions::PushStreamedContentToLayer_ForPlayer(const ULocalPlayer* LocalPlayer, FGameplayTag LayerName, TSoftClassPtr<UCommonActivatableWidget> WidgetClass) {
}

UCommonActivatableWidget* UCommonUIExtensions::PushContentToLayer_ForPlayer(const ULocalPlayer* LocalPlayer, FGameplayTag LayerName, TSubclassOf<UCommonActivatableWidget> WidgetClass) {
    return NULL;
}

void UCommonUIExtensions::PopContentFromLayer(UCommonActivatableWidget* ActivatableWidget) {
}

bool UCommonUIExtensions::IsOwningPlayerUsingTouch(const UUserWidget* WidgetContextObject) {
    return false;
}

bool UCommonUIExtensions::IsOwningPlayerUsingGamepad(const UUserWidget* WidgetContextObject) {
    return false;
}

ECommonInputType UCommonUIExtensions::GetOwningPlayerInputType(const UUserWidget* WidgetContextObject) {
    return ECommonInputType::MouseAndKeyboard;
}

ULocalPlayer* UCommonUIExtensions::GetLocalPlayerFromController(APlayerController* PlayerController) {
    return NULL;
}


