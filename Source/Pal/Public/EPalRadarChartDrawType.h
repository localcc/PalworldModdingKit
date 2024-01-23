#pragma once
#include "CoreMinimal.h"
#include "EPalRadarChartDrawType.generated.h"

UENUM(BlueprintType)
enum class EPalRadarChartDrawType : uint8 {
    Polygon,
    Polygon_Bordered,
    OnlyBorder,
};

