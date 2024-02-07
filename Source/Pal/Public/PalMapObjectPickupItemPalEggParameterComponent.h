#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectPickupItemPalEggData.h"
#include "PalMapObjectPickupItemParameterComponent.h"
#include "PalMapObjectPickupItemPalEggParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectPickupItemPalEggParameterComponent : public UPalMapObjectPickupItemParameterComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectPickupItemPalEggData PalEggData;
    
    UPalMapObjectPickupItemPalEggParameterComponent(const FObjectInitializer& ObjectInitializer);

};

