#pragma once
#include "CoreMinimal.h"
#include "EPalGroupType.h"
#include "PalBinaryMemory.h"
#include "PalGroupSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalGroupSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalGroupType GroupType;
    
    PAL_API FPalGroupSaveData();
};

