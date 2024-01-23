#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalPlayerRecordDataRepInfo_IntVal.h"
#include "PalPlayerRecordDataRepInfoArray_IntVal.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerRecordDataRepInfoArray_IntVal : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalPlayerRecordDataRepInfo_IntVal> Items;
    
public:
    PAL_API FPalPlayerRecordDataRepInfoArray_IntVal();
};

