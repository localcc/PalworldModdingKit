#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalStageInstanceId.h"
#include "PalStageModelRepInfo.generated.h"

class UPalStageModelBase;

USTRUCT(BlueprintType)
struct FPalStageModelRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalStageInstanceId InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalStageModelBase* Model;
    
    PAL_API FPalStageModelRepInfo();
};

