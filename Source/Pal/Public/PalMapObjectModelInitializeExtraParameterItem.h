#pragma once
#include "CoreMinimal.h"
#include "PalItemAndNum.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterItem.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterItem : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalItemAndNum> ItemInfos;
    
    UPalMapObjectModelInitializeExtraParameterItem();
};

