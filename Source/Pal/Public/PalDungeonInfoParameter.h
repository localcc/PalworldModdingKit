#pragma once
#include "CoreMinimal.h"
#include "PalDungeonInfoParameter.generated.h"

USTRUCT(BlueprintType)
struct FPalDungeonInfoParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText DungeonName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DisappearRemainSeconds;
    
    PAL_API FPalDungeonInfoParameter();
};

