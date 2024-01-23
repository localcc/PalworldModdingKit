#pragma once
#include "CoreMinimal.h"
#include "PalBossBattleInstanceModelCreateParameter.generated.h"

class APalBossTower;
class APalCutsceneActor;
class UAkAudioEvent;
class UDataLayerAsset;

USTRUCT(BlueprintType)
struct FPalBossBattleInstanceModelCreateParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APalCutsceneActor> IntroCutsceneActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* ReservedDataLayerAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> BGMAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalBossTower* BossTower;
    
    PAL_API FPalBossBattleInstanceModelCreateParameter();
};

