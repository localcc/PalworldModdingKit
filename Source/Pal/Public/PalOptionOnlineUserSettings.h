#pragma once
#include "CoreMinimal.h"
#include "PalOptionOnlineIds.h"
#include "PalOptionOnlineUserSettings.generated.h"

USTRUCT(BlueprintType)
struct FPalOptionOnlineUserSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalOptionOnlineIds> MuteList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalOptionOnlineIds> BlockList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TermsOfUseAgreementNumber;
    
    PAL_API FPalOptionOnlineUserSettings();
};

