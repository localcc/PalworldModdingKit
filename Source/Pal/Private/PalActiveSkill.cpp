#include "PalActiveSkill.h"
#include "Net/UnrealNetwork.h"

UPalActiveSkill::UPalActiveSkill() {
    this->IsCooling = false;
    this->ReuseCoolTimer = 0.00f;
    this->WazaType = EPalWazaID::None;
    this->IsIgnoreRaycast = false;
    this->IsStopTimer = false;
    this->DatabaseCoolTime = 0.00f;
    this->NextCoolTime = 0.00f;
    this->bIsTransient = false;
}

void UPalActiveSkill::OnRep_UpdateCoolTime() {
}

void UPalActiveSkill::OnRep_ChangeCTState() {
}

bool UPalActiveSkill::IsCoolTimeFinish() const {
    return false;
}

void UPalActiveSkill::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalActiveSkill, IsCooling);
    DOREPLIFETIME(UPalActiveSkill, ReuseCoolTimer);
}


