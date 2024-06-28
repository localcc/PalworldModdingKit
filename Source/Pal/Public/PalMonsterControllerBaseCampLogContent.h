#pragma once
#include "CoreMinimal.h"
#include "EPalMonsterControllerBaseCampLogType.h"
#include "PalInstanceID.h"
#include "PalMonsterControllerBaseCampLogContent.generated.h"

USTRUCT(BlueprintType)
struct FPalMonsterControllerBaseCampLogContent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalMonsterControllerBaseCampLogType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName textID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName TargetObjectTextId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalInstanceID InstanceId;
    
    PAL_API FPalMonsterControllerBaseCampLogContent();
};

