#pragma once
#include "CoreMinimal.h"
#include "PalDungeonLevelGimmickBase.h"
#include "PalDungeonGimmickUnlockableDoor.generated.h"

UCLASS(Blueprintable)
class PAL_API APalDungeonGimmickUnlockableDoor : public APalDungeonLevelGimmickBase {
    GENERATED_BODY()
public:
    APalDungeonGimmickUnlockableDoor(const FObjectInitializer& ObjectInitializer);

};

