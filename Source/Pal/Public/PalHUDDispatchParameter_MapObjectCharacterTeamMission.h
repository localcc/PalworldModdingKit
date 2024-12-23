#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_MapObjectCharacterTeamMission.generated.h"

class UPalUIMapObjectCharacterTeamMissionModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_MapObjectCharacterTeamMission : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectCharacterTeamMissionModel* Model;
    
    UPalHUDDispatchParameter_MapObjectCharacterTeamMission();

};

