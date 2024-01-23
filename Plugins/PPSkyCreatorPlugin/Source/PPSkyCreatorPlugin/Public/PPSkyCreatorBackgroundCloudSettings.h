#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PPSkyCreatorBackgroundCloudSettings.generated.h"

USTRUCT(BlueprintType)
struct FPPSkyCreatorBackgroundCloudSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BackgroundCloudsIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundCloudsColorTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BackgroundCloudsLayerA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BackgroundCloudsLayerB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BackgroundCloudsLayerC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BackgroundCloudsLightningPhase;
    
    PPSKYCREATORPLUGIN_API FPPSkyCreatorBackgroundCloudSettings();
};

