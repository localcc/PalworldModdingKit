#include "PalArenaEntrance.h"
#include "Net/UnrealNetwork.h"

APalArenaEntrance::APalArenaEntrance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
}

void APalArenaEntrance::OpenArenaRule_Implementation() {
}

void APalArenaEntrance::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalArenaEntrance::NotifyEntrance_Multicast_Implementation(const FPalArenaEntranceInfo& NewEntranceInfo) {
}

bool APalArenaEntrance::IsEntryPlayer(APalPlayerCharacter* PlayerCharacter) const {
    return false;
}

FTransform APalArenaEntrance::GetWarpPoint_Implementation() const {
    return FTransform{};
}

FTransform APalArenaEntrance::GetDeadItemDropPoint_Implementation() const {
    return FTransform{};
}

void APalArenaEntrance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalArenaEntrance, EntranceInfo);
}


