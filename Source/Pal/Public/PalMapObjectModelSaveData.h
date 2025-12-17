#pragma once
#include "CoreMinimal.h"
#include "EPalStatusID.h"
#include "PalBinaryMemory.h"
#include "PalMapObjectBuildProcessSaveData.h"
#include "PalMapObjectConnectorSaveData.h"
#include "PalMapObjectEffectSaveData.h"
#include "PalMapObjectPaintSaveData.h"
#include "PalMapObjectModelSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectModelSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectBuildProcessSaveData BuildProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectConnectorSaveData Connector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalStatusID, FPalMapObjectEffectSaveData> EffectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectPaintSaveData Paint;
    
    PAL_API FPalMapObjectModelSaveData();
};

