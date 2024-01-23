#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalMapObjectWorldDisposerBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalMapObjectWorldDisposerBase : public UObject {
    GENERATED_BODY()
public:
    UPalMapObjectWorldDisposerBase();
};

