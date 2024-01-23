#pragma once
#include "CoreMinimal.h"
#include "EPalBiologicalGradeComparedResult.generated.h"

UENUM(BlueprintType)
enum class EPalBiologicalGradeComparedResult : uint8 {
    Greater,
    Equal,
    Smaller,
};

