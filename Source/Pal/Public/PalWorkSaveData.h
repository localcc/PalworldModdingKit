#pragma once
#include "CoreMinimal.h"
#include "EPalWorkableType.h"
#include "PalBinaryMemory.h"
#include "PalWorkAssignSaveData.h"
#include "PalWorkSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWorkableType WorkableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FPalWorkAssignSaveData> WorkAssignMap;
    
    PAL_API FPalWorkSaveData();
};

