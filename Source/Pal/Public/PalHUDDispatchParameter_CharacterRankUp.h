#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_CharacterRankUp.generated.h"

class UPalMapObjectRankUpCharacterModel;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_CharacterRankUp : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalMapObjectRankUpCharacterModel* ConcreteModel;
    
    UPalHUDDispatchParameter_CharacterRankUp();
};

