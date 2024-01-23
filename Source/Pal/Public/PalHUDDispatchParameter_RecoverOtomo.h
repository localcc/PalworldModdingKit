#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_RecoverOtomo.generated.h"

class UPalMapObjectRecoverOtomoModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_RecoverOtomo : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalMapObjectRecoverOtomoModel* RecoverOtomoModel;
    
    UPalHUDDispatchParameter_RecoverOtomo();
};

