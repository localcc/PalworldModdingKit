#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_UseItem.generated.h"

class UPalItemSlot;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_UseItem : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalItemSlot* TargetSlot;
    
    UPalHUDDispatchParameter_UseItem();

};

