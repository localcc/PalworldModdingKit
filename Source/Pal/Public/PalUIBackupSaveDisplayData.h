#pragma once
#include "CoreMinimal.h"
#include "PalUIBackupSaveDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FPalUIBackupSaveDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BackupName;
    
    PAL_API FPalUIBackupSaveDisplayData();
};

