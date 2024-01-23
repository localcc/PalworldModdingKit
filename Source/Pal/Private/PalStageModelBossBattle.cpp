#include "PalStageModelBossBattle.h"
#include "Net/UnrealNetwork.h"

void UPalStageModelBossBattle::OnRep_InstanceModel() {
}

UPalBossBattleInstanceModel* UPalStageModelBossBattle::GetInstanceModel() const {
    return NULL;
}

void UPalStageModelBossBattle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalStageModelBossBattle, InstanceModel);
}

UPalStageModelBossBattle::UPalStageModelBossBattle() {
    this->InstanceModel = NULL;
}

