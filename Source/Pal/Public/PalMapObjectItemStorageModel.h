#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectItemStorageModel.generated.h"

class UPalItemContainer;

UCLASS(Blueprintable)
class UPalMapObjectItemStorageModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAutoDestroyIfEmpty;
    
public:
    UPalMapObjectItemStorageModel();
    UFUNCTION(BlueprintCallable)
    void RequestSortContainer();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateContainerContentInServer(UPalItemContainer* Container);
    
};

