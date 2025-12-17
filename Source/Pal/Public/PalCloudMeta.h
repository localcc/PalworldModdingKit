#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalCloudMeta.generated.h"

USTRUCT(BlueprintType)
struct FPalCloudMeta {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 SaveDataVersionNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastLocalSaveSucceeded;
    
    PAL_API FPalCloudMeta();
};

