#pragma once
#include "CoreMinimal.h"
#include "EPalDungeonItemSpawnerType.h"
#include "PalLevelObjectActor.h"
#include "PalDungeonItemSpawnerPoint.generated.h"

class APalMapObjectSpawnerTreasureBox;

UCLASS(Blueprintable)
class PAL_API APalDungeonItemSpawnerPoint : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalDungeonItemSpawnerType ItemSpawnerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalMapObjectSpawnerTreasureBox> TreasureBoxSpawnerSoftClass;
    
public:
    APalDungeonItemSpawnerPoint(const FObjectInitializer& ObjectInitializer);

};

