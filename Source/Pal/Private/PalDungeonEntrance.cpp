#include "PalDungeonEntrance.h"
#include "Net/UnrealNetwork.h"

APalDungeonEntrance::APalDungeonEntrance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->StageModel = NULL;
}

bool APalDungeonEntrance::TryGetDungeonInstanceModel(UPalDungeonInstanceModel*& OutModel) const {
    return false;
}

void APalDungeonEntrance::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalDungeonEntrance::OnResponseDialogEnterDungeon(const bool bResponse) {
}

FTransform APalDungeonEntrance::GetWarpPoint_Implementation() const {
    return FTransform{};
}

UPalStageModelDungeon* APalDungeonEntrance::GetStageModel() const {
    return NULL;
}

FPalStageInstanceId APalDungeonEntrance::GetStageInstanceId() const {
    return FPalStageInstanceId{};
}

FGuid APalDungeonEntrance::GetDungeonInstanceId() const {
    return FGuid{};
}

FTransform APalDungeonEntrance::GetDeadItemDropPoint_Implementation() const {
    return FTransform{};
}

void APalDungeonEntrance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalDungeonEntrance, StageModel);
}


