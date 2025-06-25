#pragma once
#include "CoreMinimal.h"
#include "PalUIDisplayCharacterBaseParameterInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalUIDisplayCharacterBaseParameterInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayBaseParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FriendshipEffect;
    
    PAL_API FPalUIDisplayCharacterBaseParameterInfo();
};

