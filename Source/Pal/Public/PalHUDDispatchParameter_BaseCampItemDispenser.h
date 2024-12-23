#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_BaseCampItemDispenser.generated.h"

class UPalUIBaseCampItemDispenserModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_BaseCampItemDispenser : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalUIBaseCampItemDispenserModel* Model;
    
    UPalHUDDispatchParameter_BaseCampItemDispenser();

};

