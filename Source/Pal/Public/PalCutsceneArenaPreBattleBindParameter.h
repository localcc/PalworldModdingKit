#pragma once
#include "CoreMinimal.h"
#include "PalCutsceneBindParameter.h"
#include "PalCutsceneArenaPreBattleBindParameter.generated.h"

class APalArenaPreBattleCutsceneEvent;

UCLASS(Blueprintable)
class UPalCutsceneArenaPreBattleBindParameter : public UPalCutsceneBindParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalArenaPreBattleCutsceneEvent* PreBattleEvent;
    
    UPalCutsceneArenaPreBattleBindParameter();

};

