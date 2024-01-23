#pragma once
#include "CoreMinimal.h"
#include "EPalStatusID.h"
#include "PalBinaryMemory.h"
#include "PalMapObjectBuildProcessSaveData.h"
#include "PalMapObjectConnectorSaveData.h"
#include "PalMapObjectEffectSaveData.h"
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
    
    PAL_API FPalMapObjectModelSaveData();
};

