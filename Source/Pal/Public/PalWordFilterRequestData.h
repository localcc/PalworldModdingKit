#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AsyncHTTPRequestFunctionDelegate.h"
#include "EPalWordFilterSceneType.h"
#include "PalWordFilterRequestData.generated.h"

USTRUCT(BlueprintType)
struct FPalWordFilterRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalWordFilterSceneType SceneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncHTTPRequestFunction Callback;
    
    PAL_API FPalWordFilterRequestData();
};

