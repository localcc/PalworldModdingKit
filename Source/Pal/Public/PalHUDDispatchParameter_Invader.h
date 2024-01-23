#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_Invader.generated.h"

class APalCharacter;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_Invader : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<APalCharacter> ParentCharacter;
    
    UPalHUDDispatchParameter_Invader();
};

