#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_DungeonSpawnAreaData.h"
#include "PalDungeonMarkerPointSpawnParameter.h"
#include "PalLevelObjectActor.h"
#include "Templates/SubclassOf.h"
#include "PalDungeonPointMarker.generated.h"

class APalDungeonEntrance;

UCLASS(Blueprintable)
class PAL_API APalDungeonPointMarker : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_DungeonSpawnAreaData> SpawnAreaIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEditSpawnParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDungeonMarkerPointSpawnParameter EditSpawnParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalDungeonEntrance> DungeonEntranceClass;
    
public:
    APalDungeonPointMarker(const FObjectInitializer& ObjectInitializer);

};

