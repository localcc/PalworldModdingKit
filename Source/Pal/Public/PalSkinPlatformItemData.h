#pragma once
#include "CoreMinimal.h"
#include "PalSkinPlatformItemData.generated.h"

USTRUCT(BlueprintType)
struct FPalSkinPlatformItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> PlatformToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    PAL_API FPalSkinPlatformItemData();
};

