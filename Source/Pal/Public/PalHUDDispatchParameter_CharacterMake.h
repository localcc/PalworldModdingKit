#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_CharacterMake.generated.h"

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_CharacterMake : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsNewGame;
    
    UPalHUDDispatchParameter_CharacterMake();
};

