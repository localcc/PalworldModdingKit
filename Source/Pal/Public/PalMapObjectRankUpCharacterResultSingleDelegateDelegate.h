#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectRankUpCharacterResult.h"
#include "PalMapObjectRankUpCharacterResultSingleDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FPalMapObjectRankUpCharacterResultSingleDelegate, const EPalMapObjectRankUpCharacterResult, Result);

