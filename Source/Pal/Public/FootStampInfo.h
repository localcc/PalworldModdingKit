#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPalFootType.h"
#include "FootStampInfo.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FFootStampInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalFootType, UMaterialInterface*> FootstepDecalMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FootstepDecal_Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator FootstepDecal_InitialRotation;
    
    PAL_API FFootStampInfo();
};

