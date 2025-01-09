#pragma once
#include "CoreMinimal.h"
#include "PalInstanceID.h"
#include "PalMapObjectCharacterTeamMissionIndividual.h"
#include "PalUIMapObjectCharacterTeamMissionIndividual.generated.h"

USTRUCT(BlueprintType)
struct FPalUIMapObjectCharacterTeamMissionIndividual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalInstanceID IndividualId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectCharacterTeamMissionIndividual Info;
    
    PAL_API FPalUIMapObjectCharacterTeamMissionIndividual();
};

