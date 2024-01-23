#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalFoliagePresetType.h"
#include "PalCellCoord.h"
#include "PalMapObjectFoliage.generated.h"

class UPalFoliageGridModel;
class UPalFoliagePresetDataSet;
class UPalFoliageType_InstancedStaticMesh;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectFoliage : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalFoliagePresetDataSet* PresetDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UPalFoliageType_InstancedStaticMesh*> UsedPalFoliageTypeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<EPalFoliagePresetType> LoadedPresetTypeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalCellCoord, UPalFoliageGridModel*> GridModelMap;
    
public:
    UPalMapObjectFoliage();
};

