#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalPlayerRecordDataRepInfoThreadSafe_IntVal.h"
#include "PalPlayerRecordDataRepInfoArrayThreadSafe_IntVal.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalPlayerRecordDataRepInfoThreadSafe_IntVal> Items;
    
public:
    PAL_API FPalPlayerRecordDataRepInfoArrayThreadSafe_IntVal();
};

