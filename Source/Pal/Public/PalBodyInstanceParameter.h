#pragma once
#include "CoreMinimal.h"
#include "PalBodyInstanceParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalBodyInstanceParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InstanceBodyIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 InstanceBoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngularDamping;
    
    PAL_API FPalBodyInstanceParameter();
};

