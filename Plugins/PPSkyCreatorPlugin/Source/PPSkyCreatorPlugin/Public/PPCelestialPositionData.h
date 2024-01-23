#pragma once
#include "CoreMinimal.h"
#include "PPCelestialPositionData.generated.h"

USTRUCT(BlueprintType)
struct PPSKYCREATORPLUGIN_API FPPCelestialPositionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Elevation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Azimuth;
    
    FPPCelestialPositionData();
};

