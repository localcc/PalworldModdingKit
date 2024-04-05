#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PalLightingVolumeController.generated.h"

class APPSkyCreator;
class APalSkyCreatorLightingVolume;

UCLASS(Blueprintable)
class PAL_API APalLightingVolumeController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APPSkyCreator* PPSkyCreator;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalSkyCreatorLightingVolume* CurrentVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalSkyCreatorLightingVolume*> Volumes;
    
public:
    APalLightingVolumeController(const FObjectInitializer& ObjectInitializer);

};

