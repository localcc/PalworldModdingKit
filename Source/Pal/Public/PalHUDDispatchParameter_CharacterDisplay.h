#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_CharacterDisplay.generated.h"

class UPalMapObjectDisplayCharacterModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_CharacterDisplay : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalMapObjectDisplayCharacterModel* Model;
    
    UPalHUDDispatchParameter_CharacterDisplay();
};

