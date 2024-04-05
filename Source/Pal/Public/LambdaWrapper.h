#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "LambdaWrapper.generated.h"

UCLASS(Blueprintable)
class ULambdaWrapper : public UObject {
    GENERATED_BODY()
public:
    ULambdaWrapper();

    UFUNCTION(BlueprintCallable)
    void Dispatch(bool IsSuccess);
    
};

