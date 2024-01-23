#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterBuild.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterBuild : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildWorkAmount;
    
    UPalMapObjectModelInitializeExtraParameterBuild();
};

