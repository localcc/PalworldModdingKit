#pragma once
#include "CoreMinimal.h"
#include "PalArenaPlayerParty.generated.h"

class UPalIndividualCharacterParameter;

USTRUCT(BlueprintType)
struct FPalArenaPlayerParty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterParameter*> Pals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterParameter* LeaderPal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PartySelected;
    
    PAL_API FPalArenaPlayerParty();
};

