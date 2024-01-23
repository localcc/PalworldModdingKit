#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalBoneInfo.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalBoneInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Length;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPalBoneInfo();
};

