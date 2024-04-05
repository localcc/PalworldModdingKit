#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectConcreteModelThrowableType.h"
#include "PalUIAimReticleMapObjectThrowableData.generated.h"

USTRUCT(BlueprintType)
struct FPalUIAimReticleMapObjectThrowableData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isThrowable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName targetMapObjectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalMapObjectConcreteModelThrowableType throwableType;
    
    PAL_API FPalUIAimReticleMapObjectThrowableData();
};

