#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SaveGame.h"
#include "PalWorldBaseInfoSaveData.h"
#include "PalWorldBaseInfoSaveGame.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWorldBaseInfoSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalWorldBaseInfoSaveData SaveData;
    
    UPalWorldBaseInfoSaveGame();
};

