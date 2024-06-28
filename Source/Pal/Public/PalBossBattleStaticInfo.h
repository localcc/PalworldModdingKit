#pragma once
#include "CoreMinimal.h"
#include "EPalBossBattleDifficulty.h"
#include "PalBossBattleDifficultyParameter.h"
#include "PalBossBattleStaticInfo.generated.h"

class APalCutsceneActor;
class UAkAudioEvent;
class UDataLayerAsset;

USTRUCT(BlueprintType)
struct FPalBossBattleStaticInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalCutsceneActor> IntroCutscene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalBossBattleDifficulty, FPalBossBattleDifficultyParameter> DifficultyParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* DataLayerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> BGMAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementId;
    
    PAL_API FPalBossBattleStaticInfo();
};

