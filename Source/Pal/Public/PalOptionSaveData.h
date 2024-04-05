#pragma once
#include "CoreMinimal.h"
#include "PalKeyConfigSettings.h"
#include "PalOptionAudioSettings.h"
#include "PalOptionCommonSettings.h"
#include "PalOptionGraphicsSettings.h"
#include "PalOptionKeyboardSettings.h"
#include "PalOptionPadSettings.h"
#include "PalOptionUISettings.h"
#include "PalOptionSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionKeyboardSettings KeyboardSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionPadSettings PadSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalKeyConfigSettings KeyConfigSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionUISettings UISettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionCommonSettings CommonSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionGraphicsSettings GraphicsSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionAudioSettings AudioSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAppliedUserSetting;
    
    PAL_API FPalOptionSaveData();
};

