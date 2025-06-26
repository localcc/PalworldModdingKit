#include "PalResidentSkillPoseidonOrca_SpearBase.h"
#include "Net/UnrealNetwork.h"

UPalResidentSkillPoseidonOrca_SpearBase::UPalResidentSkillPoseidonOrca_SpearBase() {
    this->bIsOpendBullets = false;
    this->CurrentBulletNum = 0;
}

FVector UPalResidentSkillPoseidonOrca_SpearBase::GetAimTargetLocation(APalCharacter* TargetCharacter) {
    return FVector{};
}

void UPalResidentSkillPoseidonOrca_SpearBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalResidentSkillPoseidonOrca_SpearBase, bIsOpendBullets);
    DOREPLIFETIME(UPalResidentSkillPoseidonOrca_SpearBase, CurrentBulletNum);
}


