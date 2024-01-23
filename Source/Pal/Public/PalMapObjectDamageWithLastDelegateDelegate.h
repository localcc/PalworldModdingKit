#pragma once
#include "CoreMinimal.h"
#include "PalDamageInfo.h"
#include "PalMapObjectDamageWithLastDelegateDelegate.generated.h"

class UPalMapObjectModel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FPalMapObjectDamageWithLastDelegate, UPalMapObjectModel*, Model, const FPalDamageInfo&, DamageInfo, int32, LastHp);

