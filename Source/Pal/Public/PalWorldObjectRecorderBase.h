#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalWorldObjectRecorderBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UPalWorldObjectRecorderBase : public UObject {
    GENERATED_BODY()
public:
    UPalWorldObjectRecorderBase();
};

