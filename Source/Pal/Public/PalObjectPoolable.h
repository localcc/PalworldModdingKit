#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalObjectPoolParameter.h"
#include "PalObjectPoolable.generated.h"

UINTERFACE(Blueprintable)
class PAL_API UPalObjectPoolable : public UInterface {
    GENERATED_BODY()
};

class PAL_API IPalObjectPoolable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReturnToPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeFromPool();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FPalObjectPoolParameter GetObjectPoolParameter() const;
    
};

