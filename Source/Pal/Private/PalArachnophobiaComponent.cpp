#include "PalArachnophobiaComponent.h"

UPalArachnophobiaComponent::UPalArachnophobiaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = false;
}

void UPalArachnophobiaComponent::UpdateArachnophobiaVisible() {
}

void UPalArachnophobiaComponent::OnUpdateHP(FFixedPoint64 nowHP, FFixedPoint64 nowMaxHP) {
}

void UPalArachnophobiaComponent::OnInitCharcter(APalCharacter* InCharacter) {
}

void UPalArachnophobiaComponent::OnChangeGraphicsDelegate(const FPalOptionGraphicsSettings& PrevSettings, const FPalOptionGraphicsSettings& NewSettings) {
}


