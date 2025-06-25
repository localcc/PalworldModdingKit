#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalDungeonGimmickTriggerParameter.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPalDungeonGimmickTriggerParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid TriggerLevelInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TriggerActor;
    
    PAL_API FPalDungeonGimmickTriggerParameter();
};

