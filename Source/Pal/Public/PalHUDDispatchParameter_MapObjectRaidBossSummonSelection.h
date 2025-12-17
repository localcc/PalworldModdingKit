#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_MapObjectRaidBossSummonSelection.generated.h"

class UPalUIMapObjectRaidBossSummonSelectionModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_MapObjectRaidBossSummonSelection : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIMapObjectRaidBossSummonSelectionModel* Model;
    
    UPalHUDDispatchParameter_MapObjectRaidBossSummonSelection();

};

