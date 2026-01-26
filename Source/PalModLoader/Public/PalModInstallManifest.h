#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalModInstallManifest.generated.h"

USTRUCT(BlueprintType)
struct PALMODLOADER_API FPalModInstallManifest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 WorkshopId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastWorkshopUpdateTimeUtc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime LastInstallTimeUtc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Files;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Dirs;
    
    FPalModInstallManifest();
};

