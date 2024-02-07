#pragma once
#include "CoreMinimal.h"
#include "PalMapObject.h"
#include "PalMapObjectDropItem.generated.h"

UCLASS(Blueprintable)
class PAL_API APalMapObjectDropItem : public APalMapObject {
    GENERATED_BODY()
public:
    APalMapObjectDropItem(const FObjectInitializer& ObjectInitializer);

};

