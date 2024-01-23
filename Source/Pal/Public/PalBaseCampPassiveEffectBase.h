#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalBaseCampPassiveEffectMapObjectInfo.h"
#include "PalBaseCampPassiveEffectBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UPalBaseCampPassiveEffectBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalBaseCampPassiveEffectMapObjectInfo> MapObjectInfoMapByMapObjectId;
    
public:
    UPalBaseCampPassiveEffectBase();
};

