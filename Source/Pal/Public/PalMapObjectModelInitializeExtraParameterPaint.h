#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterPaint.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterPaint : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor PaintColor;
    
    UPalMapObjectModelInitializeExtraParameterPaint();

};

