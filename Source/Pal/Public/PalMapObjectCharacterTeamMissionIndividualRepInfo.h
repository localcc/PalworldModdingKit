#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalInstanceID.h"
#include "PalMapObjectCharacterTeamMissionIndividual.h"
#include "PalMapObjectCharacterTeamMissionIndividualRepInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectCharacterTeamMissionIndividualRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalInstanceID IndividualId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalMapObjectCharacterTeamMissionIndividual IndividualInfo;
    
    PAL_API FPalMapObjectCharacterTeamMissionIndividualRepInfo();
};

