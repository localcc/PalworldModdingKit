#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PalOptionSaveData.h"
#include "PalOptionSaveGame.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalOptionSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptionSaveData OptionSaveData;
    
    UPalOptionSaveGame();
};

