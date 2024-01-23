#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterByPlayerUId.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterByPlayerUId : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ByPlayerUId;
    
    UPalMapObjectModelInitializeExtraParameterByPlayerUId();
};

