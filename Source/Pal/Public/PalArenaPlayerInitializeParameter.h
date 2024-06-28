#pragma once
#include "CoreMinimal.h"
#include "EPalArenaPlayerIndex.h"
#include "PalArenaPlayerInitializeParameter.generated.h"

class UPalIndividualCharacterParameter;

USTRUCT(BlueprintType)
struct FPalArenaPlayerInitializeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalArenaPlayerIndex PlayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterParameter* PlayerIndividualParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterParameter*> OtomoList;
    
    PAL_API FPalArenaPlayerInitializeParameter();
};

