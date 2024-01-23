#pragma once
#include "CoreMinimal.h"
#include "EPalWorkAssignableCheckResult.generated.h"

UENUM(BlueprintType)
enum class EPalWorkAssignableCheckResult : uint8 {
    WorkerEvent,
    Dead,
    Sleeping,
    RecoverHungry,
    NotSuitable,
    NotAssignableOtomo,
    NotValidIndividualCharacterParameter,
    CannotReviveSelf,
    NotExistsMapObject,
    MapObjectEffect,
    Enable,
};

