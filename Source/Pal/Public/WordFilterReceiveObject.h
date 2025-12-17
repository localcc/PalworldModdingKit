#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "WordFilterReceiveObject.generated.h"

UCLASS(Blueprintable)
class UWordFilterReceiveObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PlayerUId;
    
    UWordFilterReceiveObject();

    UFUNCTION(BlueprintCallable)
    void ReceivedResult(const FString& ResponseBody, bool bResponseOK, int32 ResponseCode);
    
};

