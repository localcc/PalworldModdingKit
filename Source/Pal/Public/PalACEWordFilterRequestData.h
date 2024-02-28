#pragma once
#include "CoreMinimal.h"
#include "AsyncHTTPRequestFunctionDelegate.h"
#include "EPalACEWordFilterSceneType.h"
#include "PalACEWordFilterRequestData.generated.h"

USTRUCT(BlueprintType)
struct FPalACEWordFilterRequestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalACEWordFilterSceneType SceneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncHTTPRequestFunction Callback;
    
    PAL_API FPalACEWordFilterRequestData();
};

