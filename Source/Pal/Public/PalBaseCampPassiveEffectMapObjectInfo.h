#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBaseCampPassiveEffectMapObjectInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampPassiveEffectMapObjectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> ConcreteModelInstanceIds;
    
    PAL_API FPalBaseCampPassiveEffectMapObjectInfo();
};

