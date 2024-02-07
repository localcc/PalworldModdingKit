#include "PalStageModelBossBattle.h"
#include "Net/UnrealNetwork.h"

UPalStageModelBossBattle::UPalStageModelBossBattle() {
    this->InstanceModel = NULL;
}

void UPalStageModelBossBattle::OnRep_InstanceModel() {
}

UPalBossBattleInstanceModel* UPalStageModelBossBattle::GetInstanceModel() const {
    return NULL;
}

void UPalStageModelBossBattle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalStageModelBossBattle, InstanceModel);
}


