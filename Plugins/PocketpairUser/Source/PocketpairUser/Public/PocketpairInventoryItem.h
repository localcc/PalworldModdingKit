#pragma once
#include "CoreMinimal.h"
#include "PocketpairInventoryItem.generated.h"

USTRUCT(BlueprintType)
struct POCKETPAIRUSER_API FPocketpairInventoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    FPocketpairInventoryItem();
};

