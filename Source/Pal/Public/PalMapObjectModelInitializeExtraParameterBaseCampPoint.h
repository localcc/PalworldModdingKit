#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterBaseCampPoint.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterBaseCampPoint : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCreateLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForRaidBossArea;
    
    UPalMapObjectModelInitializeExtraParameterBaseCampPoint();

};

