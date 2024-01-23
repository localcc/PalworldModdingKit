#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalUIItemPossessStatusIndicatorParameter.generated.h"

class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class UPalUIItemPossessStatusIndicatorParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterHandle* TargetCharacter;
    
    UPalUIItemPossessStatusIndicatorParameter();
};

