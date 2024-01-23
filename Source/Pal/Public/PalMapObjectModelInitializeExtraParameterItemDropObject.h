#pragma once
#include "CoreMinimal.h"
#include "PalItemAndNum.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterItemDropObject.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterItemDropObject : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalItemAndNum> ItemInfos;
    
    UPalMapObjectModelInitializeExtraParameterItemDropObject();
};

