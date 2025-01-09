#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalOrilrigCannonHPWorldHUDParameter.generated.h"

class UPalCannonDamageReactionComponent;

UCLASS(Blueprintable)
class UPalOrilrigCannonHPWorldHUDParameter : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPalCannonDamageReactionComponent* CannonDamageReaction;
    
    UPalOrilrigCannonHPWorldHUDParameter();

};

