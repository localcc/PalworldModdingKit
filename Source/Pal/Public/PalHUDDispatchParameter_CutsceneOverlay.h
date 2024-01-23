#pragma once
#include "CoreMinimal.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_CutsceneOverlay.generated.h"

class UPalCutsceneComponent;

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_CutsceneOverlay : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalCutsceneComponent* CutsceneComponent;
    
    UPalHUDDispatchParameter_CutsceneOverlay();
};

