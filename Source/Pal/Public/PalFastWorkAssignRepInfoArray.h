#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalWorkAssignRepInfo.h"
#include "PalFastWorkAssignRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastWorkAssignRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalWorkAssignRepInfo> Items;
    
    PAL_API FPalFastWorkAssignRepInfoArray();
};

