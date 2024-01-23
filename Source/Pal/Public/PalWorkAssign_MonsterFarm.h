#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FloatCounter.h"
#include "PalStaticItemIdAndNum.h"
#include "PalWorkAssign.h"
#include "PalWorkAssign_MonsterFarm.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorkAssign_MonsterFarm : public UPalWorkAssign {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatCounter ActionIntervalTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector WalkTargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalStaticItemIdAndNum SpawnItemInfoPerAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SpawnActionWholeCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SpawnActionCurrentCount;
    
public:
    UPalWorkAssign_MonsterFarm();
};

