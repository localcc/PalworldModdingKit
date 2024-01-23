#pragma once
#include "CoreMinimal.h"
#include "PalDamageInfo.h"
#include "PalMapObjectDamageDelegateDelegate.generated.h"

class UPalMapObjectModel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPalMapObjectDamageDelegate, UPalMapObjectModel*, Model, const FPalDamageInfo&, DamageInfo);

