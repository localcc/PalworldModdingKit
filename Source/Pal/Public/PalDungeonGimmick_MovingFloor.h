#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PalDungeonGimmickMovingFloorPoint.h"
#include "PalDungeonGimmick_MovingFloor.generated.h"

class UMovementComponent;
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* FloorMesh;
    
public:
    APalDungeonGimmick_MovingFloor(const FObjectInitializer& ObjectInitializer);

};

