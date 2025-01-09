#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalMapObjectCharacterTeamMissionIndividualRepInfo.h"
#include "PalFastMapObjectCharacterTeamMissionIndividualRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastMapObjectCharacterTeamMissionIndividualRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectCharacterTeamMissionIndividualRepInfo> Items;
    
    PAL_API FPalFastMapObjectCharacterTeamMissionIndividualRepInfoArray();
};

