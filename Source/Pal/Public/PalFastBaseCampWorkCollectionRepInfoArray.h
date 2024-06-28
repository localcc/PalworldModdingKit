#pragma once
#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PalBaseCampWorkCollectionRepInfo.h"
#include "PalFastBaseCampWorkCollectionRepInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FPalFastBaseCampWorkCollectionRepInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalBaseCampWorkCollectionRepInfo> Items;
    
    PAL_API FPalFastBaseCampWorkCollectionRepInfoArray();
};

