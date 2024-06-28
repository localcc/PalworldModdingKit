#include "PalIndividualCharacterSaveParameter.h"

FPalIndividualCharacterSaveParameter::FPalIndividualCharacterSaveParameter() {
    this->Gender = EPalGenderType::None;
    this->CharacterClass = NULL;
    this->Level = 0;
    this->Rank = 0;
    this->RankUpExp = 0;
    this->Rank_HP = 0;
    this->Rank_Attack = 0;
    this->Rank_Defence = 0;
    this->Rank_CraftSpeed = 0;
    this->Exp = 0;
    this->IsRarePal = false;
    this->Talent_HP = 0;
    this->Talent_Melee = 0;
    this->Talent_Shot = 0;
    this->Talent_Defense = 0;
    this->FullStomach = 0.00f;
    this->PhysicalHealth = EPalStatusPhysicalHealthType::Healthful;
    this->WorkerSick = EPalBaseCampWorkerSickType::None;
    this->DyingTimer = 0;
    this->IsPlayer = false;
    this->Support = 0;
    this->CraftSpeed = 0;
    this->HungerType = EPalStatusHungerType::Default;
    this->SanityValue = 0.00f;
    this->BaseCampWorkerEventType = EPalBaseCampWorkerEventType::None;
    this->BaseCampWorkerEventProgressTime = 0.00f;
    this->MaxFullStomach = 0.00f;
    this->FullStomachDecreaseRate_Tribe = 0.00f;
    this->UnusedStatusPoint = 0;
    this->Tiemr_FoodWithStatusEffect = 0;
    this->CurrentWorkSuitability = EPalWorkSuitability::None;
    this->bAppliedDeathPenarty = false;
    this->PalReviveTimer = 0.00f;
    this->VoiceID = 0;
    this->bSkinApplied = false;
    this->IsFavoritePal = false;
}

