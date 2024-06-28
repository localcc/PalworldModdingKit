#include "PalBuildObjectDefenseBulletLauncherBase.h"
#include "PalMapObjectBulletLauncherParameterComponent.h"

APalBuildObjectDefenseBulletLauncherBase::APalBuildObjectDefenseBulletLauncherBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BulletLauncherParameterComponent = CreateDefaultSubobject<UPalMapObjectBulletLauncherParameterComponent>(TEXT("BulletLauncherParameter"));
}




void APalBuildObjectDefenseBulletLauncherBase::SetEnableTrigger(bool EnableTrigger) {
}




void APalBuildObjectDefenseBulletLauncherBase::GetCharacterLocationWithOffset(APalCharacter* OwnerCharacter, FVector& OutLocation) {
}

void APalBuildObjectDefenseBulletLauncherBase::GetCharacterLocationAndRotationWithOffset(APalCharacter* OwnerCharacter, FVector PreCharaLocation, FVector& OutLocation, FRotator& OutRotation) {
}




