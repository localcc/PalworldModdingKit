#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EPalFarmSkillFruitsState.h"
#include "PalFarmSkillFruitsTreeGrowupProcessSet.generated.h"

USTRUCT(BlueprintType)
struct FPalFarmSkillFruitsTreeGrowupProcessSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalFarmSkillFruitsState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FComponentReference> TargetCompRefs;
    
    PAL_API FPalFarmSkillFruitsTreeGrowupProcessSet();
};

