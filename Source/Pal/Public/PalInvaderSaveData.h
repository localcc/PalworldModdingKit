#pragma once
#include "CoreMinimal.h"
#include "PalInvaderSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalInvaderSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInvading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolTimeElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoolTimeFinish;
    
    PAL_API FPalInvaderSaveData();
};

