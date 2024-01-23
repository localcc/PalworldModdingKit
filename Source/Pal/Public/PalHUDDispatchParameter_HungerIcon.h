#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_HungerIcon.generated.h"

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_HungerIcon : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsExistFood;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid BelongGroupId;
    
    UPalHUDDispatchParameter_HungerIcon();
};

