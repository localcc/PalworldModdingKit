#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectDropItem.h"
#include "PalMapObjectCommonDropItem3D.generated.h"

UCLASS(Blueprintable)
class PAL_API APalMapObjectCommonDropItem3D : public APalMapObjectDropItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool registerdDistributeTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentLinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearDownSpeed;
    
    APalMapObjectCommonDropItem3D(const FObjectInitializer& ObjectInitializer);

};

