#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectSpawnerBase.h"
#include "PalMapObjectSpawnerSingleBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API APalMapObjectSpawnerSingleBase : public APalMapObjectSpawnerBase {
    GENERATED_BODY()
public:
    APalMapObjectSpawnerSingleBase(const FObjectInitializer& ObjectInitializer);

};

