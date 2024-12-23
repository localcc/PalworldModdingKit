#pragma once
#include "CoreMinimal.h"
#include "PalCheckMultiplayRestrictionLatentOnCompletedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPalCheckMultiplayRestrictionLatentOnCompletedDelegate, bool, bIsReset, bool, bCanPlay);

