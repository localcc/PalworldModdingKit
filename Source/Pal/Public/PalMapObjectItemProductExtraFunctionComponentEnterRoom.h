#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectActionType.h"
#include "PalMapObjectExtraFunctionComponent.h"
#include "PalMapObjectItemProductExtraFunctionComponentEnterRoom.generated.h"

class UDataLayerAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectItemProductExtraFunctionComponentEnterRoom : public UPalMapObjectExtraFunctionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalInteractiveObjectActionType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataLayerAsset* DataLayerAsset;
    
public:
    UPalMapObjectItemProductExtraFunctionComponentEnterRoom(const FObjectInitializer& ObjectInitializer);

};

