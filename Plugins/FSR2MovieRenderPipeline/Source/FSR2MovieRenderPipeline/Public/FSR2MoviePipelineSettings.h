#pragma once
#include "CoreMinimal.h"
#include "MoviePipelineViewFamilySetting.h"
#include "EFSR2MoviePipelineQuality.h"
#include "FSR2MoviePipelineSettings.generated.h"

UCLASS(Blueprintable)
class FSR2MOVIERENDERPIPELINE_API UFSR2MoviePipelineSettings : public UMoviePipelineViewFamilySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSR2MoviePipelineQuality FSR2Quality;
    
    UFSR2MoviePipelineSettings();

};

