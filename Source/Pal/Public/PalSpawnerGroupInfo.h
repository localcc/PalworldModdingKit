#pragma once
#include "CoreMinimal.h"
#include "EPalOneDayTimeType.h"
#include "EPalWeatherConditionType.h"
#include "PalSpawnerOneTribeInfo.h"
#include "PalSpawnerGroupInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalSpawnerGroupInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalOneDayTimeType OnlyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWeatherConditionType OnlyWeather;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalSpawnerOneTribeInfo> PalList;
    
    PAL_API FPalSpawnerGroupInfo();
};

