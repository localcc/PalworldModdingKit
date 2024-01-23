#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_RepairBench.generated.h"

class UPalMapObjectRepairItemModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_RepairBench : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMapObjectRepairItemModel* Model;
    
    UPalHUDDispatchParameter_RepairBench();
};

