#pragma once
#include "CoreMinimal.h"
#include "PalArenaPlayerParty.h"
#include "OnPalSelectedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnPalSelectedDelegate, FPalArenaPlayerParty, ArenaParty);

