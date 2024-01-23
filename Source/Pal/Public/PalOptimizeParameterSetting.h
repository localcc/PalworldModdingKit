#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalOptimizeParameter.h"
#include "PalOptimizeParameterSetting.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalOptimizeParameterSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOptimizeParameter Parameter;
    
    UPalOptimizeParameterSetting();
};

