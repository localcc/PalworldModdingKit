#pragma once
#include "CoreMinimal.h"
#include "EImGuiDPIScaleMethod.generated.h"

UENUM(BlueprintType)
enum class EImGuiDPIScaleMethod : uint8 {
    ImGui,
    Slate,
};

