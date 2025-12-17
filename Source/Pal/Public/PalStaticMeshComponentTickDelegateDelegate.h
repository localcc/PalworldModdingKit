#pragma once
#include "CoreMinimal.h"
#include "PalStaticMeshComponentTickDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalStaticMeshComponentTickDelegate, float, DeltaTime);

