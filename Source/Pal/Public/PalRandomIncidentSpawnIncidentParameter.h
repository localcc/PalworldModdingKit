#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_NPCAppearFlagData.h"
#include "PalRandomIncidentSpawnIncidentParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalRandomIncidentSpawnIncidentParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName IncidentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SettingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LotteryRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_NPCAppearFlagData AppearFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AppearFlagCondition;
    
    PAL_API FPalRandomIncidentSpawnIncidentParameter();
};

