#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectFishPondCaughtCharacterInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectFishPondCaughtCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharacterLevel;
    
    PAL_API FPalMapObjectFishPondCaughtCharacterInfo();
};

