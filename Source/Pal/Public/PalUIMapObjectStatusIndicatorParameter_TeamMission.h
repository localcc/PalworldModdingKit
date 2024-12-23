#pragma once
#include "CoreMinimal.h"
#include "PalUIMapObjectStatusIndicatorParameterBase.h"
#include "PalUIMapObjectStatusIndicatorParameter_TeamMission.generated.h"

class UPalUIMapObjectCharacterTeamMissionModel;

UCLASS(Blueprintable)
class UPalUIMapObjectStatusIndicatorParameter_TeamMission : public UPalUIMapObjectStatusIndicatorParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectCharacterTeamMissionModel* UIModel;
    
    UPalUIMapObjectStatusIndicatorParameter_TeamMission();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalUIMapObjectCharacterTeamMissionModel* GetUIModel() const;
    
};

