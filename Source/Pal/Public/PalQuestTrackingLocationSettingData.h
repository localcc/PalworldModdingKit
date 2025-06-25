#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalDataTableRowName_NPCUniqueData.h"
#include "PalDataTableRowName_PalHumanData.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalQuestTrackingLocationSettingData.generated.h"

USTRUCT(BlueprintType)
struct FPalQuestTrackingLocationSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> FixedLocationPointArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PalMonsterData> TrackingPalIdArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_PalHumanData> TrackingNPCIdArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDataTableRowName_NPCUniqueData> TrackingUniqueNPCIdArray;
    
    PAL_API FPalQuestTrackingLocationSettingData();
};

