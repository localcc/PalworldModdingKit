#pragma once
#include "CoreMinimal.h"
#include "PalUIAimReticleMapObjectAssignableData.generated.h"

USTRUCT(BlueprintType)
struct FPalUIAimReticleMapObjectAssignableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAssignable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName targetMapObjectID;
    
    PAL_API FPalUIAimReticleMapObjectAssignableData();
};

