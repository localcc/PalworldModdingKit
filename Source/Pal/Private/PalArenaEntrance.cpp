#include "PalArenaEntrance.h"
#include "Net/UnrealNetwork.h"

APalArenaEntrance::APalArenaEntrance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->SpectateRoomInfoObject = NULL;
}

void APalArenaEntrance::RequestEnterSpectate(int32 Index) {
}

void APalArenaEntrance::RequestEnterPvP() {
}

void APalArenaEntrance::OpenArenaGuide_Implementation() {
}

void APalArenaEntrance::OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType) {
}

void APalArenaEntrance::OnRep_EntranceInfo() {
}

bool APalArenaEntrance::IsEntryPlayer(APalPlayerCharacter* PlayerCharacter) const {
    return false;
}

FTransform APalArenaEntrance::GetWarpPoint_Implementation() const {
    return FTransform{};
}

TArray<FPalArenaSpectateRoomInfo> APalArenaEntrance::GetSpectateInfo() const {
    return TArray<FPalArenaSpectateRoomInfo>();
}

FTransform APalArenaEntrance::GetItemDropPoint_Implementation() const {
    return FTransform{};
}

FPalArenaEntranceInfo APalArenaEntrance::GetEntranceInfo() const {
    return FPalArenaEntranceInfo{};
}

void APalArenaEntrance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalArenaEntrance, EntranceInfo);
    DOREPLIFETIME(APalArenaEntrance, SpectateRoomInfoObject);
}


