#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_ItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_ItemData();
};
FORCEINLINE uint32 GetTypeHash(const FPalDataTableRowName_ItemData) { return 0; }

