#pragma once
#include "CoreMinimal.h"
#include "PalWorkAssignDefineData.h"
#include "PalWorkAssignDefineDataStaticSetting.generated.h"

USTRUCT(BlueprintType)
struct FPalWorkAssignDefineDataStaticSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalWorkAssignDefineData AssignDefineData;
    
    PAL_API FPalWorkAssignDefineDataStaticSetting();
};

