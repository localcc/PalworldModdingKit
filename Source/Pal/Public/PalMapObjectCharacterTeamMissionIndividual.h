#pragma once
#include "CoreMinimal.h"
#include "EPalTribeID.h"
#include "PalMapObjectCharacterTeamMissionIndividual.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectCharacterTeamMissionIndividual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalTribeID TribeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString NickName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Strength;
    
    PAL_API FPalMapObjectCharacterTeamMissionIndividual();
};

