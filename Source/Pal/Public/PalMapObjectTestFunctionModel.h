#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectTestFunctionModel.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectTestFunctionModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPalMapObjectTestFunctionModel();
private:
    UFUNCTION(BlueprintCallable)
    void RequestCountUpSIngle_ServerInternal(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RequestCountUp_ServerInternal(const int32 RequestPlayerId, const int32 IncrementNum);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestCountUp(const int32 IncrementNum);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRecieveCountUp(const int32 ReflectedCounter);
    
};

