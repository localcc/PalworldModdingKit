#pragma once
#include "CoreMinimal.h"
#include "PalNPCAppearFlagSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalNPCAppearFlagSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NPCAppearFlagName;
    
    PAL_API FPalNPCAppearFlagSaveData();
};

