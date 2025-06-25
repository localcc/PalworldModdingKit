#pragma once
#include "CoreMinimal.h"
#include "EPalPlayerEquipLantern.h"
#include "PalPlayerDataEquipLanternData.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerDataEquipLanternData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EquipLanternItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPlayerEquipLantern EquipType;
    
    PAL_API FPalPlayerDataEquipLanternData();
};

