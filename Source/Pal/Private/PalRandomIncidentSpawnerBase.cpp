#include "PalRandomIncidentSpawnerBase.h"

APalRandomIncidentSpawnerBase::APalRandomIncidentSpawnerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LotteryClass = NULL;
    this->CoolDownTimeMinute = 0.00f;
    this->CoolDownTimeSecRemain = 0.00f;
    this->PlayerId = 0;
    this->ExecIncident = NULL;
    this->Status = EPalRandomIncidentSpawnerStatus::Unknown;
    this->Parameter = NULL;
    this->Lottery = NULL;
}

void APalRandomIncidentSpawnerBase::UpdateStatusWaitPlayerOutside(float DeltaTime) {
}

void APalRandomIncidentSpawnerBase::UpdateStatusIdle(float DeltaTime) {
}

void APalRandomIncidentSpawnerBase::UpdateStatusExecuting(float DeltaTime) {
}

void APalRandomIncidentSpawnerBase::UpdateStatusCoolDown(float DeltaTime) {
}

void APalRandomIncidentSpawnerBase::StartCoolDown() {
}

void APalRandomIncidentSpawnerBase::SetStatus(EPalRandomIncidentSpawnerStatus NewStatus) {
}

void APalRandomIncidentSpawnerBase::SetAreaRadius(EPalRandomIncidentSpawnerAreaType AreaType, float Radius) {
}


bool APalRandomIncidentSpawnerBase::IsInsideArea(EPalRandomIncidentSpawnerAreaType Area, const ACharacter* pPlayer) const {
    return false;
}

TMap<EPalRandomIncidentSpawnerAreaType, float> APalRandomIncidentSpawnerBase::GetAreaRadiusAll() const {
    return TMap<EPalRandomIncidentSpawnerAreaType, float>();
}

float APalRandomIncidentSpawnerBase::GetAreaRadius(EPalRandomIncidentSpawnerAreaType AreaType) const {
    return 0.0f;
}

APalPlayerCharacter* APalRandomIncidentSpawnerBase::FindPlayerInsideArea(EPalRandomIncidentSpawnerAreaType AreaType) {
    return NULL;
}

void APalRandomIncidentSpawnerBase::EndIncident() {
}

void APalRandomIncidentSpawnerBase::DestroyUnuseActors(TArray<AActor*>& OutList) {
}

void APalRandomIncidentSpawnerBase::CreateWalkPathList() {
}

void APalRandomIncidentSpawnerBase::CollectWalkPoints(const TArray<AActor*>& WalkPoints) {
}

void APalRandomIncidentSpawnerBase::CollectChildActors(TArray<AActor*>& OutList) {
}

void APalRandomIncidentSpawnerBase::AddWalkPath_Implementation(const FName& PathName, const TArray<AActor*>& PointList) {
}


