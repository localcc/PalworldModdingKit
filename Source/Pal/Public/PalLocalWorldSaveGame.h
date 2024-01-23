#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PalLocalSaveData.h"
#include "PalLocalWorldSaveGame.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalLocalWorldSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalLocalSaveData SaveData;
    
    UPalLocalWorldSaveGame();
};

