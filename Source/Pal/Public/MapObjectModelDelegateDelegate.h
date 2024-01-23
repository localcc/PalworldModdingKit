#pragma once
#include "CoreMinimal.h"
#include "MapObjectModelDelegateDelegate.generated.h"

class UPalMapObjectModel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapObjectModelDelegate, UPalMapObjectModel*, Model);

