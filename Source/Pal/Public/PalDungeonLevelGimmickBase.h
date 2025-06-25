#pragma once
#include "CoreMinimal.h"
#include "PalLevelObjectActor.h"
#include "PalDungeonLevelGimmickBase.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API APalDungeonLevelGimmickBase : public APalLevelObjectActor {
    GENERATED_BODY()
public:
    APalDungeonLevelGimmickBase(const FObjectInitializer& ObjectInitializer);

};

