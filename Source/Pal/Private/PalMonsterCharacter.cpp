#include "PalMonsterCharacter.h"
#include "PalCharacterLiftupObjectComponent.h"

void APalMonsterCharacter::SelectedFeedingItem(const FPalItemSlotId& itemSlotId, const int32 Num) {
}

void APalMonsterCharacter::OnTriggerInteract(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalMonsterCharacter::OnSelectedOrderWorkerRadialMenu(UPalHUDDispatchParameterBase* Parameter) {
}

void APalMonsterCharacter::MasterWazaUpdateWhenLevelUp(int32 addLevel, int32 nowLevel) {
}

void APalMonsterCharacter::MasterWazaSetup(APalCharacter* InCharacter) {
}

bool APalMonsterCharacter::IsLiftupObject() const {
    return false;
}

APalMonsterCharacter::APalMonsterCharacter() {
    this->LiftupObjectComponent = CreateDefaultSubobject<UPalCharacterLiftupObjectComponent>(TEXT("Liftup"));
}

