#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectDisposeOptions.h"
#include "MapObjectModelDisposeDelegateDelegate.generated.h"

class UPalMapObjectModel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMapObjectModelDisposeDelegate, UPalMapObjectModel*, Model, const FPalMapObjectDisposeOptions&, Options);

