#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_TreasureBoxSalvageGame.generated.h"

class UPalUIMapObjectTreasureBoxSalvageGameModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_TreasureBoxSalvageGame : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectTreasureBoxSalvageGameModel* Model;
    
    UPalHUDDispatchParameter_TreasureBoxSalvageGame();

};

