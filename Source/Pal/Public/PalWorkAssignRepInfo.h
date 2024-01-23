#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalWorkAssignRepInfo.generated.h"

class UPalWorkAssign;

USTRUCT(BlueprintType)
struct FPalWorkAssignRepInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LocationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalWorkAssign* WorkAssign;
    
    PAL_API FPalWorkAssignRepInfo();
};

