#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "PalGlobalPalStorageSaveParameter.h"
#include "PalGlobalPalStorageSaveGame.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalGlobalPalStorageSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalGlobalPalStorageSaveParameter> SaveParameterArray;
    
    UPalGlobalPalStorageSaveGame();

};

