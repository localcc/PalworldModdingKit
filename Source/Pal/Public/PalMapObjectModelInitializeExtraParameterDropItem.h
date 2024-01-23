#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalContainerId.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterDropItem.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterDropItem : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId TempContainerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ReleaseDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPickup;
    
    UPalMapObjectModelInitializeExtraParameterDropItem();
};

