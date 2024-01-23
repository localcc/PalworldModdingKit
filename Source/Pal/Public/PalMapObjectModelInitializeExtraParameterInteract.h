#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectInteractRestrictType.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterInteract.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterInteract : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalMapObjectInteractRestrictType RestrictType;
    
    UPalMapObjectModelInitializeExtraParameterInteract();
};

