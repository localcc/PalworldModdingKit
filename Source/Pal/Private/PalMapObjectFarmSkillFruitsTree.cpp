#include "PalMapObjectFarmSkillFruitsTree.h"
#include "Net/UnrealNetwork.h"

APalMapObjectFarmSkillFruitsTree::APalMapObjectFarmSkillFruitsTree(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->ProductStaticItemIds.AddDefaulted(3);
    this->CurrentState = EPalFarmSkillFruitsState::None;
}

void APalMapObjectFarmSkillFruitsTree::OnRep_ProductStaticItemIds(TArray<FName> PrevIds) {
}

void APalMapObjectFarmSkillFruitsTree::OnRep_CurrentState() {
}



void APalMapObjectFarmSkillFruitsTree::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalMapObjectFarmSkillFruitsTree, ProductStaticItemIds);
    DOREPLIFETIME(APalMapObjectFarmSkillFruitsTree, CurrentState);
}


