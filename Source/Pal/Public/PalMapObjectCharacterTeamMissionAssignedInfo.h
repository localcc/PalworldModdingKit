#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalFastMapObjectCharacterTeamMissionIndividualRepInfoArray.h"
#include "PalMapObjectCharacterTeamMissionAssignedInfo.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectCharacterTeamMissionAssignedInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalFastMapObjectCharacterTeamMissionIndividualRepInfoArray RepInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 RequiredElementalCharacterNum;
    
    UPalMapObjectCharacterTeamMissionAssignedInfo();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

