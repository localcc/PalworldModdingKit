#pragma once
#include "CoreMinimal.h"
#include "EPalMapObjectModelConnectIndex.h"
#include "PalMapObjectModelConnectInfoItem.h"
#include "PalMapObjectModelConnectInfo.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectModelConnectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalMapObjectModelConnectIndex ConnectIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectModelConnectInfoItem> ConnectToInfos;
    
    PAL_API FPalMapObjectModelConnectInfo();
};

