#include "PalAIController.h"
#include "PalAIActionComponent.h"
#include "PalFollowingComponent.h"
#include "Templates/SubclassOf.h"

APalAIController::APalAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UPalFollowingComponent>(TEXT("PathFollowingComponent")).SetDefaultSubobjectClass<UPalAIActionComponent>(TEXT("ActionsComp"))) {
    this->CombatModuleClass = NULL;
    this->SkillSlot = NULL;
    this->R1AttackTarget = NULL;
    this->MinAIActionComponentTickInterval = 0.00f;
    this->bIsActive = false;
    this->IsSquadBehaviour = false;
    this->IsNotSleepWildLife = false;
    this->MySquad = NULL;
    this->HateSystem = NULL;
    FProperty* p_ActionsComp_Prior = GetClass()->FindPropertyByName("ActionsComp");
    this->AIActionComponent = (UPalAIActionComponent*)*p_ActionsComp_Prior->ContainerPtrToValuePtr<UPalAIActionComponent*>(this);
    this->PalAIBlackboard = NULL;
    this->bOverwriteBlockDetectionParams = false;
    this->PalBlackboardClass = NULL;
    this->IsDeadBodyTimeDelate = false;
    this->IsSelfTimeDelate_FromSpawnTime = false;
    this->bShouldCheckStuckByTick = false;
}

void APalAIController::WaitForSeconds(float Time) {
}

void APalAIController::SimpleMoveToActorWithLineTraceGround(const AActor* GoalActor) {
}

void APalAIController::ShowHateArrow() {
}

void APalAIController::ShowActionDebug() {
}

void APalAIController::SetInitialValue(bool IsSquad, bool NotSleep) {
}

void APalAIController::SetActiveAI(bool Active) {
}

void APalAIController::RPCDummy_Implementation() {
}

TEnumAsByte<EPathFollowingRequestResult::Type> APalAIController::PalMoveToLocation(const FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPaths) {
    return EPathFollowingRequestResult::Failed;
}

void APalAIController::OnDeadTimerStart(FPalDeadInfo Info) {
}

void APalAIController::OnChangedActiveCharacter(const bool bActive) {
}

void APalAIController::OnChangeChangeImportance(EPalCharacterImportanceType Next) {
}



void APalAIController::MoveToLocation_ErrorSupportMove(FVector GoalLocation) {
}

void APalAIController::MoveToDirectly(FVector GoalLocation) {
}

bool APalAIController::IsOnNavMesh_TargetLocation(FVector TargetLocation) {
    return false;
}

bool APalAIController::IsOnNavMesh() {
    return false;
}

bool APalAIController::IsLeader() {
    return false;
}

bool APalAIController::IsExistPathForLocation_ForBP_HeightRangeCheck(const FVector Location, const float AcceptanceRadius, const float UpOffset, const float DownOffset, FVector& OutGoalLocation) {
    return false;
}

bool APalAIController::IsExistPathForLocation_ForBP(const FVector Location, const float AcceptanceRadius) const {
    return false;
}

bool APalAIController::IsActiveAI() const {
    return false;
}

APalCharacter* APalAIController::GetSquadLeader() {
    return NULL;
}

UPalSquad* APalAIController::GetSquad() {
    return NULL;
}

UPalAIBlackboardBase* APalAIController::GetMyPalBlackboard() {
    return NULL;
}

UPalAIBlackboardBase* APalAIController::GetLeaderPalBlackboard() const {
    return NULL;
}

bool APalAIController::GetIsSquadBehaviour() {
    return false;
}

bool APalAIController::GetIsnotSleepWildLife() {
    return false;
}

UPalHate* APalAIController::GetHateSystem() {
    return NULL;
}

UPalAIActionComponent* APalAIController::GetAIActionComponent() {
    return NULL;
}

bool APalAIController::FindReachablePathLocation(TArray<FVector> RequestLocationArray, FVector& OutGoalLocation) {
    return false;
}

bool APalAIController::FindNearestNavmeshPointFromSelf(FVector& OutLocation) {
    return false;
}

void APalAIController::DeleteSelfDeadBody() {
}

void APalAIController::CreatePalBlackboard() {
}

AActor* APalAIController::CopyTargetFromOtherAI(const AActor* FromAcotr) {
    return NULL;
}

void APalAIController::AddTargetPlayer_ForEnemy(AActor* PlayerOrPal) {
}

void APalAIController::AddTargetNPC(AActor* NPC) {
}


