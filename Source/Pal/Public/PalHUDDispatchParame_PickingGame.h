#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParame_PickingGame.generated.h"

class UPalPickingGameProcessor;

UCLASS(Blueprintable)
class UPalHUDDispatchParame_PickingGame : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalPickingGameProcessor* Procesor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OutResult;
    
    UPalHUDDispatchParame_PickingGame();

};

