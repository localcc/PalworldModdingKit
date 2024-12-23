#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PalDataLayerRuntimeSetting.h"
#include "PalDataLayerRuntimeSettingsData.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalDataLayerRuntimeSettingsData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataLayerRuntimeSetting> Settings;
    
    UPalDataLayerRuntimeSettingsData();

};

