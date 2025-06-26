#include "PalStationaryLauncherBase.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

APalStationaryLauncherBase::APalStationaryLauncherBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->bCanTickInNotLaunchLoop = false;
    this->LaunchObjectClass = NULL;
    this->LaunchedCount = 0;
    this->LaunchLoopNum = 0;
}

void APalStationaryLauncherBase::StartLaunchAnimation_Implementation() {
}

void APalStationaryLauncherBase::SetLaunchObjectClass_ServerInternal(TSubclassOf<AActor> InLaunchObjectClass) {
}



void APalStationaryLauncherBase::BroadcastLaunch_Multicast_Implementation() {
}

void APalStationaryLauncherBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalStationaryLauncherBase, LaunchObjectClass);
}


