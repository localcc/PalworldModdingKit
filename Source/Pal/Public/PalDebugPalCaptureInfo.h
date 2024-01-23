#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalDebugPalCaptureInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalDebugPalCaptureInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalMonsterData PalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    PAL_API FPalDebugPalCaptureInfo();
};

