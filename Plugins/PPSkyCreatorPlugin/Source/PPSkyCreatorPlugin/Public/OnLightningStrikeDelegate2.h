#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnLightningStrikeDelegate2.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLightningStrike, FVector, LightningPosition);

