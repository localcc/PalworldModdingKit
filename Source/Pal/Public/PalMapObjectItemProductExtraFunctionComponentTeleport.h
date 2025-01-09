#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalInteractiveObjectActionType.h"
#include "PalMapObjectExtraFunctionComponent.h"
#include "PalMapObjectItemProductExtraFunctionComponentTeleport.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalMapObjectItemProductExtraFunctionComponentTeleport : public UPalMapObjectExtraFunctionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalInteractiveObjectActionType ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LocationIdTeleportTo;
    
public:
    UPalMapObjectItemProductExtraFunctionComponentTeleport(const FObjectInitializer& ObjectInitializer);

};

