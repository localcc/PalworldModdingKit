#pragma once
#include "CoreMinimal.h"
#include "EPalActionType.h"
#include "PalMapObjectPickupItemData.h"
#include "PalMapObjectPickupItemParameterComponentBase.h"
#include "PalMapObjectPickupItemParameterComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectPickupItemParameterComponent : public UPalMapObjectPickupItemParameterComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectPickupItemData> DropItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LongHoldInteractDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalActionType InteractPlayerActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceIgnoreSaveItemContainer;
    
    UPalMapObjectPickupItemParameterComponent(const FObjectInitializer& ObjectInitializer);

};

