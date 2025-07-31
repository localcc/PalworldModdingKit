#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalPlayerRecordDataRepInfoThreadSafe_BoolVal.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerRecordDataRepInfoThreadSafe_BoolVal : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    PAL_API FPalPlayerRecordDataRepInfoThreadSafe_BoolVal();
};

