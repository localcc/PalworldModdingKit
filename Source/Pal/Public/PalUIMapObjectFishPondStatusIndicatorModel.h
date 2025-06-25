#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalUIMapObjectFishPondStatusIndicatorModel.generated.h"

class UPalMapObjectFishPondModel;
class UPalUIMapObjectFishPondStatusIndicatorModel;
class UPalWorkProgress;

UCLASS(Blueprintable)
class PAL_API UPalUIMapObjectFishPondStatusIndicatorModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, UPalUIMapObjectFishPondStatusIndicatorModel*, UIModel);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnUpdateSelectedTargetDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnUpdateProductNumInfoDelegate;
    
    UPalUIMapObjectFishPondStatusIndicatorModel();

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateTarget(UPalMapObjectFishPondModel* InOwnerConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateProductNumInfo(UPalMapObjectFishPondModel* InOwnerConcreteModel);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorkProgress* GetWorkProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetTargetLotteryName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetProductNumInfo(int32& OutRemainProductNum, int32& OutRequestedProductNum) const;
    
};

