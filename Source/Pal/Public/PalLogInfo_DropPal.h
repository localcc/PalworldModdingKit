#pragma once
#include "CoreMinimal.h"
#include "PalLogInfo_DropPal.generated.h"

USTRUCT(BlueprintType)
struct FPalLogInfo_DropPal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NickName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CharacterID;
    
    PAL_API FPalLogInfo_DropPal();
};

