#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectFishPondCharacterInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIMapObjectFishPondCharacterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplay;
    
    PAL_API FPalUIMapObjectFishPondCharacterInfo();
};

