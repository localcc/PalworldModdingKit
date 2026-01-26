#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalSteamSubscribedItemInfo.generated.h"

USTRUCT(BlueprintType)
struct PALMODLOADER_API FPalSteamSubscribedItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 WorkshopId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InstallFolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastUpdateTimeUtc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    FPalSteamSubscribedItemInfo();
};

