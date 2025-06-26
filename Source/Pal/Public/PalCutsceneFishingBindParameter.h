#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalCutsceneBindParameter.h"
#include "PalFishingCutsceneCharacterInfo.h"
#include "PalCutsceneFishingBindParameter.generated.h"

UCLASS(Blueprintable)
class UPalCutsceneFishingBindParameter : public UPalCutsceneBindParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CameraTargetOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraTargetDistanceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalFishingCutsceneCharacterInfo CharacterInfo;
    
    UPalCutsceneFishingBindParameter();

};

