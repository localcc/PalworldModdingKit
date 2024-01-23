#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalHumanData.h"
#include "PalWorldSecurityWantedPoliceSettingData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldSecurityWantedPoliceSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalHumanData PoliceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoliceNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoliceLevel;
    
    PAL_API FPalWorldSecurityWantedPoliceSettingData();
};

