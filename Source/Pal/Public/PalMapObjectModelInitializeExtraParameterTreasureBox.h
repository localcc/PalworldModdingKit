#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectTreasureGradeType.h"
#include "PalMapObjectModelInitializeExtraParameterBase.h"
#include "PalMapObjectModelInitializeExtraParameterTreasureBox.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectModelInitializeExtraParameterTreasureBox : public UPalMapObjectModelInitializeExtraParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalMapObjectTreasureGradeType GradeType;
    
    UPalMapObjectModelInitializeExtraParameterTreasureBox();
};

