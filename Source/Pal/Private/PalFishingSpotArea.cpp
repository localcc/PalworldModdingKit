#include "PalFishingSpotArea.h"
#include "Net/UnrealNetwork.h"

APalFishingSpotArea::APalFishingSpotArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->FishShadowNum = 5;
    this->FishShadowRespawnTime = 10.00f;
    this->EscapeDestroyTime = 2.00f;
}


void APalFishingSpotArea::OnRep_SpawnedFishShadowDataArray() {
}


void APalFishingSpotArea::OnCreatedIndividualHandle_ServerInternal(FPalInstanceID IndividualId) {
}

void APalFishingSpotArea::OnChangeDayTime() {
}

void APalFishingSpotArea::ObtainCatchCharacter_ServerInternal_Implementation(const FPalNetArchive& Archive) {
}

bool APalFishingSpotArea::IsEmptyFishShadow() const {
    return false;
}

void APalFishingSpotArea::EscapeAllFishShadow() {
}

void APalFishingSpotArea::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APalFishingSpotArea, SpawnedFishShadowDataArray);
    DOREPLIFETIME(APalFishingSpotArea, SpotAreaId);
}


