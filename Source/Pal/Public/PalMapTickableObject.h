#pragma once
#include "CoreMinimal.h"
#include "PalMapObject.h"
#include "PalMapTickableObject.generated.h"

UCLASS(Blueprintable)
class PAL_API APalMapTickableObject : public APalMapObject {
    GENERATED_BODY()
public:
    APalMapTickableObject(const FObjectInitializer& ObjectInitializer);

};

