#pragma once
#include "CoreMinimal.h"
#include "PalPlayerRecordCountMapStruct.h"
#include "PalPlayerRecordFlagMapStruct.h"
#include "PalPlayerRecordDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FPalPlayerRecordDataStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int64> simpleCountRecordMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> simpleFlagMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPlayerRecordCountMapStruct> countMapRecordMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalPlayerRecordFlagMapStruct> flagMapRecordMap;
    
    PAL_API FPalPlayerRecordDataStruct();
};

