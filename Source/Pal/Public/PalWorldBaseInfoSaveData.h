#pragma once
#include "CoreMinimal.h"
#include "PalWorldBaseInfoSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalWorldBaseInfoSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WorldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HostPlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HostPlayerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InGameDay;
    
    PAL_API FPalWorldBaseInfoSaveData();
};

