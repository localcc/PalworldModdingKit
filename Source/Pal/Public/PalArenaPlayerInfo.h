#pragma once
#include "CoreMinimal.h"
#include "PalArenaPlayerParty.h"
#include "PalArenaPlayerInfo.generated.h"

class UPalIndividualCharacterParameter;

USTRUCT(BlueprintType)
struct FPalArenaPlayerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterParameter* PlayerIndividualParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterParameter*> OtomoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalArenaPlayerParty Party;
    
    PAL_API FPalArenaPlayerInfo();
};

