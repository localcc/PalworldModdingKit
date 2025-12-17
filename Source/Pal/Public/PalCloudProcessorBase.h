#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalCloudProcessorBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalCloudProcessorBase : public UObject {
    GENERATED_BODY()
public:
    UPalCloudProcessorBase();

};

