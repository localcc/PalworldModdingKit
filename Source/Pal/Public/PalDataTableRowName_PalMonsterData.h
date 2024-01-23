#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalMonsterData.generated.h"

USTRUCT(BlueprintType)
struct PAL_API FPalDataTableRowName_PalMonsterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    FPalDataTableRowName_PalMonsterData();
};
FORCEINLINE uint32 GetTypeHash(const FPalDataTableRowName_PalMonsterData) { return 0; }

