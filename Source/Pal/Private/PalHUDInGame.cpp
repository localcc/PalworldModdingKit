#include "PalHUDInGame.h"
#include "PalUIHUDLayoutBase.h"
#include "Templates/SubclassOf.h"

APalHUDInGame::APalHUDInGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DebugDisplay.AddDefaulted(1);
    this->HUDLayoutClass = UPalUIHUDLayoutBase::StaticClass();
    this->PlayerInputGuardClass = NULL;
    this->HUDLayout = NULL;
    this->LiftSlotModel = NULL;
    this->HoverWidget = NULL;
    this->SoundPlayer = NULL;
}

void APalHUDInGame::TickWorldHUDs() {
}

void APalHUDInGame::ShowLiftIcon() {
}

void APalHUDInGame::RemoveWorldHUDFromWidgetId(const FGuid& ID) {
}

void APalHUDInGame::RemoveWorldHUD(const FGuid& ID) {
}

void APalHUDInGame::RemoveHUD(const FGuid& ID) {
}

FGuid APalHUDInGame::PushWidgetStackableUI(TSubclassOf<UPalUserWidgetStackableUI> WidgetClass, UPalHUDDispatchParameterBase* Parameter) {
    return FGuid{};
}

void APalHUDInGame::OnApplicationActivationStateChanged(bool bIsFocused) {
}


void APalHUDInGame::HideLiftIcon() {
}

void APalHUDInGame::Debug_DrawInteractPoints() {
}

UPalUserWidgetWorldHUD* APalHUDInGame::CreateWorldHUDWidget(TSubclassOf<UPalUserWidgetWorldHUD> WidgetClass, UPalHUDDispatchParameterBase* Parameter) {
    return NULL;
}

UPalUserWidget* APalHUDInGame::CreateHUDWidget(TSubclassOf<UPalUserWidget> WidgetClass, const EPalHUDWidgetPriority Priority, UPalHUDDispatchParameterBase* Parameter) {
    return NULL;
}

void APalHUDInGame::CloseWorldHUDWidget(const FGuid WidgetId) {
}

void APalHUDInGame::CloseOverlayUI(const FGuid& ID) {
}

void APalHUDInGame::CloseHUDWidget(UPalUserWidget* Widget) {
}



FGuid APalHUDInGame::AddWorldHUD(FPalWorldHUDParameter Parameter) {
    return FGuid{};
}

FGuid APalHUDInGame::AddHUD(TSubclassOf<UPalUserWidget> WidgetClass, const EPalHUDWidgetPriority Priority, UPalHUDDispatchParameterBase* Parameter) {
    return FGuid{};
}


