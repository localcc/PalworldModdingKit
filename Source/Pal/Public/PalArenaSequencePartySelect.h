#pragma once
#include "CoreMinimal.h"
#include "EPalArenaPlayerIndex.h"
#include "PalArenaPlayerParty.h"
#include "PalArenaSequenceBase.h"
#include "PalArenaSequencePartySelect.generated.h"

UCLASS(Blueprintable)
class UPalArenaSequencePartySelect : public UPalArenaSequenceBase {
    GENERATED_BODY()
public:
    UPalArenaSequencePartySelect();

protected:
    UFUNCTION(BlueprintCallable)
    void FillPartyPalAuto(EPalArenaPlayerIndex PlayerIndex, UPARAM(Ref) FPalArenaPlayerParty& ArenaPlayerParty);
    
};

