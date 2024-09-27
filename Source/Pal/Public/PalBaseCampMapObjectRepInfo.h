#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Net/Serialization/FastArraySerializer.h"
#include "PalBaseCampMapObjectRepInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampMapObjectRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid InstanceId;
    
    PAL_API FPalBaseCampMapObjectRepInfo();
};

