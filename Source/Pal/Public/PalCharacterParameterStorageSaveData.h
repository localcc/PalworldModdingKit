#pragma once
#include "CoreMinimal.h"
#include "PalCharacterStoredParameterInfoSaveData.h"
#include "PalCharacterParameterStorageSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalCharacterParameterStorageSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalCharacterStoredParameterInfoSaveData> StoredParameterInfoSaveData;
    
    PAL_API FPalCharacterParameterStorageSaveData();
};

