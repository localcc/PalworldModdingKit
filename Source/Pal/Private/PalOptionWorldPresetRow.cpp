#include "PalOptionWorldPresetRow.h"

FPalOptionWorldPresetRow::FPalOptionWorldPresetRow() {
    this->Diffculty = EPalOptionWorldDifficulty::None;
    this->RandomizerType = EPalRandomizerType::None;
    this->DayTimeSpeedRate = 0.00f;
    this->NightTimeSpeedRate = 0.00f;
    this->ExpRate = 0.00f;
    this->PalCaptureRate = 0.00f;
    this->PalSpawnNumRate = 0.00f;
    this->PalDamageRateAttack = 0.00f;
    this->PalDamageRateDefense = 0.00f;
    this->PlayerDamageRateAttack = 0.00f;
    this->PlayerDamageRateDefense = 0.00f;
    this->PlayerStomachDecreaceRate = 0.00f;
    this->PlayerStaminaDecreaceRate = 0.00f;
    this->PlayerAutoHPRegeneRate = 0.00f;
    this->PlayerAutoHpRegeneRateInSleep = 0.00f;
    this->PalStomachDecreaceRate = 0.00f;
    this->PalStaminaDecreaceRate = 0.00f;
    this->PalAutoHPRegeneRate = 0.00f;
    this->PalAutoHpRegeneRateInSleep = 0.00f;
    this->BuildObjectDamageRate = 0.00f;
    this->BuildObjectDeteriorationDamageRate = 0.00f;
    this->CollectionDropRate = 0.00f;
    this->CollectionObjectHpRate = 0.00f;
    this->CollectionObjectRespawnSpeedRate = 0.00f;
    this->EnemyDropItemRate = 0.00f;
    this->DeathPenalty = EPalOptionWorldDeathPenalty::None;
    this->bActiveUNKO = false;
    this->DropItemMaxNum_UNKO = 0;
    this->bEnableInvaderEnemy = false;
    this->DropItemMaxNum = 0;
    this->bAutoResetGuildNoOnlinePlayers = false;
    this->AutoResetGuildTimeNoOnlinePlayers = 0.00f;
    this->GuildPlayerMaxNum = 0;
    this->PalEggDefaultHatchingTime = 0.00f;
    this->BaseCampWorkerMaxNum = 0;
}

