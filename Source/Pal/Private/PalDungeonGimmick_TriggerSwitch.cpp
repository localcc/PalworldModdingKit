#include "PalDungeonGimmick_TriggerSwitch.h"

APalDungeonGimmick_TriggerSwitch::APalDungeonGimmick_TriggerSwitch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TriggerCooldownInterval = 0.50f;
    this->bDetectPlayerOnly = true;
}

void APalDungeonGimmick_TriggerSwitch::OnInteractEnd(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component) {
}

void APalDungeonGimmick_TriggerSwitch::OnInteractBegin(AActor* Other, TScriptInterface<IPalInteractiveObjectComponentInterface> Component) {
}


