#pragma once
#include "CoreMinimal.h"
#include "CelestialPositionData.generated.h"

USTRUCT(BlueprintType)
struct SKYCREATORPLUGIN_API FCelestialPositionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Elevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Azimuth;
    
    FCelestialPositionData();
};

