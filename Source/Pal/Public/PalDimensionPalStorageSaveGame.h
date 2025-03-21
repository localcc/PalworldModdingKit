#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PalDimensionPalStorageSaveParameter.h"
#include "PalDimensionPalStorageSaveGame.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalDimensionPalStorageSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDimensionPalStorageSaveParameter> SaveParameterArray;
    
    UPalDimensionPalStorageSaveGame();

};

