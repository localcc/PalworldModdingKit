#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_ArenaMenu.generated.h"

class APalArenaEntrance;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_ArenaMenu : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalArenaEntrance* Entrance;
    
    UPalHUDDispatchParameter_ArenaMenu();

};

