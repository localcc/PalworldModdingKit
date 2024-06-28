#include "PalRideMarkerComponent.h"
#include "Net/UnrealNetwork.h"

UPalRideMarkerComponent::UPalRideMarkerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RidePositionType = EPalRidePositionType::HorseRide;
    this->bIsAdjustRotation = false;
    this->bIsFixScale = true;
    this->bHiddenCharacterWhenAim = true;
    this->bDisableLookAtByRide = false;
    this->bDisableFullBodyIK_UniqueRide = false;
    this->UniqueRidePalWeaponClass = NULL;
    this->SkillSlot = NULL;
    this->WeaponActor = NULL;
}

void UPalRideMarkerComponent::SyncActiveSkill(UPalIndividualCharacterParameter* IndividualParameter) {
}

void UPalRideMarkerComponent::SetVisibleWeapon() {
}

void UPalRideMarkerComponent::SetupUniqueWeapon() {
}

void UPalRideMarkerComponent::SetRidingFlag_Implementation(bool bIsEnable) {
}

bool UPalRideMarkerComponent::IsRiding() const {
    return false;
}

bool UPalRideMarkerComponent::IsAdjustRotation() const {
    return false;
}

FTransform UPalRideMarkerComponent::GetRideSocketTransform(TEnumAsByte<ERelativeTransformSpace> space) const {
    return FTransform{};
}

APalCharacter* UPalRideMarkerComponent::GetRiderCharacter() const {
    return NULL;
}

FName UPalRideMarkerComponent::GetAttackSocketName_Implementation() const {
    return NAME_None;
}

UPalActiveSkillSlot* UPalRideMarkerComponent::GetActiveSkillSlot() {
    return NULL;
}

void UPalRideMarkerComponent::CameraChangeActorActive(bool Active) {
}

void UPalRideMarkerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalRideMarkerComponent, Rider);
}


