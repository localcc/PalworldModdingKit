#pragma once
#include "CoreMinimal.h"
#include "GameDateTime.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectTorchModel.generated.h"

class UPalWorkBootUp;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectTorchModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 IgnitionMinutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameDateTime ExtinctionDateTime;
    
public:
    UPalMapObjectTorchModel();
private:
    UFUNCTION(BlueprintCallable)
    void RequestTriggerIgnition_ToServer(const int32 RequestPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnWorkBootUp_ServerInternal(UPalWorkBootUp* Work);
    
};

