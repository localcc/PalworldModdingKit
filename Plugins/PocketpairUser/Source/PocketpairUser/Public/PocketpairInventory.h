#pragma once
#include "CoreMinimal.h"
#include "PocketpairInventoryItem.h"
#include "PocketpairPlatformID.h"
#include "PocketpairInventory.generated.h"

USTRUCT(BlueprintType)
struct POCKETPAIRUSER_API FPocketpairInventory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPocketpairInventoryItem> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPocketpairPlatformID PlatformID;
    
    FPocketpairInventory();
};

