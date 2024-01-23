#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectItemContainerSlotAttribute.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterItemContainerAttribute.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterItemContainerAttribute : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPalMapObjectItemContainerSlotAttribute> AllSlotAttribute;
    
    UPalMapObjectModelInitializeExtraParameterItemContainerAttribute();
};

