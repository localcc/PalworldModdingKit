#include "PalMissileLauncher_Destroyed.h"

APalMissileLauncher_Destroyed::APalMissileLauncher_Destroyed(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ENetRole::ROLE_SimulatedProxy;
}


