#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "PalDungeonGimmickMovingFloorPoint.h"
#include "PalDungeonGimmick_MovingFloor.generated.h"

class UMovementComponent;
class UNiagaraSystem;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class PAL_API APalDungeonGimmick_MovingFloor : public APawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartPointWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDungeonGimmickMovingFloorPoint> PatrolPointOffsets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DefaultFXAtPatrolPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckReachPatrolPointInDedicatedServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FloorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FVector> PatrolPointWorldLocations;
    
public:
    APalDungeonGimmick_MovingFloor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetPatrolPointWorldLocation(const int32 Index, FVector& OutLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetPatrolPointInfo(const int32 Index, FPalDungeonGimmickMovingFloorPoint& OutInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReachPatrolPoint_BP(const int32 ReachPatrolPointIndex, const FPalDungeonGimmickMovingFloorPoint& PointInfo);
    
};

