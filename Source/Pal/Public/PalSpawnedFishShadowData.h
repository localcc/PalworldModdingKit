#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalFishBattleBehaviorType.h"
#include "EPalFishingSpotDifficultyType.h"
#include "EPalOneDayTimeType.h"
#include "PalFishShadowDataRow.h"
#include "PalFishSpawnPointData.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalSpawnedFishShadowData.generated.h"

USTRUCT(BlueprintType)
struct FPalSpawnedFishShadowData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalFishShadowDataRow FishShadowData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter CharacterSaveParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalFishSpawnPointData SpawnPointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid SpawnedFishUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalOneDayTimeType OnlyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ItemLotteryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalFishBattleBehaviorType BehaviorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Difficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid RequestPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DecreaseDurability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName FishingDataRowId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalFishingSpotDifficultyType FishingSpotDifficulty;
    
    PAL_API FPalSpawnedFishShadowData();
};

