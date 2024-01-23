#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalPlayerRecordDataRepInfo_BoolVal.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerRecordDataRepInfo_BoolVal : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    PAL_API FPalPlayerRecordDataRepInfo_BoolVal();
};

