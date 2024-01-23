#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_PalMonsterData.h"
#include "PalGliderPalInfo.generated.h"

class APalGliderObject;

USTRUCT(BlueprintType)
struct FPalGliderPalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_PalMonsterData PalName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<APalGliderObject>> GliderPalArray;
    
    PAL_API FPalGliderPalInfo();
};

