#pragma once
#include "CoreMinimal.h"
#include "PalItemAndNum.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterInitialItem.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterInitialItem : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalItemAndNum> ItemInfos;
    
    UPalMapObjectModelInitializeExtraParameterInitialItem();
};

