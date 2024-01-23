#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectShippingItemModel.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectShippingItemModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> ShippingHours;
    
public:
    UPalMapObjectShippingItemModel();
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeTimeHoursInServer();
    
};

