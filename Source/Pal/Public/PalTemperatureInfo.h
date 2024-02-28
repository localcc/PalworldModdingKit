#pragma once
#include "CoreMinimal.h"
#include "EPalBodyTemperatureState.h"
#include "PalTemperatureInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalTemperatureInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentResistRank_Heat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentResistRank_Cold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalBodyTemperatureState CurrentBodyState;
    
    PAL_API FPalTemperatureInfo();
};

