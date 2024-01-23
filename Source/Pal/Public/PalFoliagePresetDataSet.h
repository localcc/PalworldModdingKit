#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EPalFoliagePresetType.h"
#include "PalFoliagePresetData.h"
#include "PalFoliagePresetDataSet.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalFoliagePresetDataSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalFoliagePresetType, FPalFoliagePresetData> Presets;
    
    UPalFoliagePresetDataSet();
};

