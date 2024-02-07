#include "PalMapObjectModelEffect_Burn.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModelEffect_Burn::UPalMapObjectModelEffect_Burn() {
    this->bBurning = false;
    this->PersistenceValue = 0.00f;
    this->HitCollisionBox = NULL;
}

void UPalMapObjectModelEffect_Burn::OnRep_Burning(bool bLastValue) {
}

void UPalMapObjectModelEffect_Burn::OnHitCollisionBox(UPrimitiveComponent* MyHitComponent, AActor* OtherHitActor, UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount) {
}

void UPalMapObjectModelEffect_Burn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelEffect_Burn, bBurning);
}


