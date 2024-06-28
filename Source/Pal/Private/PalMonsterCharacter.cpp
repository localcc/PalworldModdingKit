#include "PalMonsterCharacter.h"
#include "PalCharacterLiftupObjectComponent.h"

APalMonsterCharacter::APalMonsterCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowReceiveTickEventOnDedicatedServer = false;
    this->LiftupObjectComponent = CreateDefaultSubobject<UPalCharacterLiftupObjectComponent>(TEXT("Liftup"));
}

void APalMonsterCharacter::SelectedFeedingItem(const FPalItemSlotId& itemSlotId, const int32 Num) {
}

void APalMonsterCharacter::RefreshSkin(bool bIsActive) {
}

void APalMonsterCharacter::OnTriggerInteract(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalMonsterCharacter::OnSelectedOrderWorkerRadialMenu(UPalHUDDispatchParameterBase* Parameter) {
}

bool APalMonsterCharacter::IsLiftupObject() const {
    return false;
}


