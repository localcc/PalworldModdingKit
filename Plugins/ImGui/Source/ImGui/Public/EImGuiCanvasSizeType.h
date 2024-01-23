#pragma once
#include "CoreMinimal.h"
#include "EImGuiCanvasSizeType.generated.h"

UENUM(BlueprintType)
enum class EImGuiCanvasSizeType : uint8 {
    Custom,
    Desktop,
    Viewport,
};

