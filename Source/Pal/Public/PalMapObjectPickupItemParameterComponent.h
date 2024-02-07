#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectPickupItemData.h"
#include "PalMapObjectPickupItemParameterComponentBase.h"
#include "PalMapObjectPickupItemParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectPickupItemParameterComponent : public UPalMapObjectPickupItemParameterComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectPickupItemData> DropItems;
    
    UPalMapObjectPickupItemParameterComponent(const FObjectInitializer& ObjectInitializer);

};

