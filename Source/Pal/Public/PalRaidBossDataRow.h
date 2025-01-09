#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalRaidBossSpawnInfo.h"
#include "PalRaidBossSuccessAnyOneItemInfo.h"
#include "PalRaidBossSuccessItemInfo.h"
#include "PalRaidBossSummonMeteorInfo.h"
#include "Templates/SubclassOf.h"
#include "PalRaidBossDataRow.generated.h"

class APalRaidBossSummonGeneratorBase;

USTRUCT(BlueprintType)
struct FPalRaidBossDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalRaidBossSpawnInfo> InfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalRaidBossSummonMeteorInfo> SummonMeteor_Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalRaidBossSummonGeneratorBase> SummonGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalDataTableRowName_PalMonsterData, float> EggPalIDAndWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalRaidBossSuccessItemInfo> SuccessItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalRaidBossSuccessAnyOneItemInfo> SuccessAnyOneItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementId;
    
    PAL_API FPalRaidBossDataRow();
};

