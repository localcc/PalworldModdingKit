#include "PalFishingCatchBattleParameter.h"

FPalFishingCatchBattleParameter::FPalFishingCatchBattleParameter() {
    this->RequiredCatchAmount = 0.00f;
    this->DefaultProgressAmount = 0.00f;
    this->SuccessFightCatchAmount = 0.00f;
    this->MissFightCatchAmount = 0.00f;
    this->CheckFishPickInterval = 0.00f;
    this->FishingInputAcceptTime = 0.00f;
    this->SinkWaitMinTime = 0.00f;
    this->SinkWaitMaxTime = 0.00f;
    this->GaugeMaxSize = 0.00f;
    this->HitBarDefaultSize = 0.00f;
    this->HitBarMoveSpeed = 0.00f;
    this->HitBarMoveGravity = 0.00f;
    this->HitBarMoveLiftForce = 0.00f;
    this->InitFishPos = 0.00f;
    this->InitHitBarPos = 0.00f;
    this->StartDelayTime = 0.00f;
    this->OverrideSearchAreaRate = 0.00f;
    this->OverrideSearchProbability = 0.00f;
    this->FirstFishingMissFightCatchAmountRate = 0.00f;
}

