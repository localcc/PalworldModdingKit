#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalPlayerRecordDataRepInfoThreadSafe_IntVal.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerRecordDataRepInfoThreadSafe_IntVal : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    PAL_API FPalPlayerRecordDataRepInfoThreadSafe_IntVal();
};

