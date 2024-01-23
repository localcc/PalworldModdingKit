#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterSpawnedBy.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterSpawnedBy : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ByMapObjectModelInstanceId;
    
    UPalMapObjectModelInitializeExtraParameterSpawnedBy();
};

