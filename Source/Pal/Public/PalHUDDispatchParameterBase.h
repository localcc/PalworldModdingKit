#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MuCO/CustomizableObjectInstance.h"
#include "PalHUDDispatchParameterBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalHUDDispatchParameterBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeginDestroyDelegate OnClose;
    
    UPalHUDDispatchParameterBase();
};

