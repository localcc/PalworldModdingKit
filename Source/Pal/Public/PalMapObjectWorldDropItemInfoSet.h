#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectWorldDropItemInfo.h"
#include "PalMapObjectWorldDropItemInfoSet.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectWorldDropItemInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectWorldDropItemInfo> Infos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectWorldDropItemInfo> InsertReservedInfoSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxCount;
    
    PAL_API FPalMapObjectWorldDropItemInfoSet();
};

