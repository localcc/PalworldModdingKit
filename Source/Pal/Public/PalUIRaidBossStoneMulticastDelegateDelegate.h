#pragma once
#include "CoreMinimal.h"
#include "PalUIRaidBossStoneMulticastDelegateDelegate.generated.h"

class UPalUIMapObjectRaidBossSummonSelectionModel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPalUIRaidBossStoneMulticastDelegate, UPalUIMapObjectRaidBossSummonSelectionModel*, UIModel);

