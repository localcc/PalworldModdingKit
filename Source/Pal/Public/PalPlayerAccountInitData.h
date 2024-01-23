#pragma once
#include "CoreMinimal.h"
#include "PalPlayerDataCharacterMakeInfo.h"
#include "PalPlayerAccountInitData.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerAccountInitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalPlayerDataCharacterMakeInfo CharacterMakeData;
    
    PAL_API FPalPlayerAccountInitData();
};

