#pragma once
#include "CoreMinimal.h"
#include "PalArenaSpectatePlayerInfo.generated.h"

class UPalIndividualCharacterParameter;

USTRUCT(BlueprintType)
struct FPalArenaSpectatePlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterParameter* IndividualParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterParameter*> OtomoList;
    
    PAL_API FPalArenaSpectatePlayerInfo();
};

