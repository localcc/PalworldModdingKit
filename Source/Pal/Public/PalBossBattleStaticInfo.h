#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalMonsterData.h"
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
    UDataLayerAsset* DataLayerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalMonsterData PalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> BGMAudioEvent;
    
    PAL_API FPalBossBattleStaticInfo();
};

