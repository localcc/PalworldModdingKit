#include "PalOilrigGoalCrateBase.h"
#include "Net/UnrealNetwork.h"

APalOilrigGoalCrateBase::APalOilrigGoalCrateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->IsInteracted = false;
    this->IsOpened = false;
}

void APalOilrigGoalCrateBase::RequestInteract() {
}


void APalOilrigGoalCrateBase::OpenDoor_Implementation() {
}

void APalOilrigGoalCrateBase::OnRep_IsOpened() {
}

void APalOilrigGoalCrateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalOilrigGoalCrateBase, IsOpened);
}


