#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterRaidBossArea.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterRaidBossArea : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid RaidBossAreaInstanceId;
    
    UPalMapObjectModelInitializeExtraParameterRaidBossArea();

};

