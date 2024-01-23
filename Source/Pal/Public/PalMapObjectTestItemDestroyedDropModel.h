#pragma once
#include "CoreMinimal.h"
#include "PalItemAndNum.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectTestItemDestroyedDropModel.generated.h"

class UPalMapObjectModel;

UCLASS(Blueprintable)
class UPalMapObjectTestItemDestroyedDropModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalItemAndNum> DropItemInfos;
    
public:
    UPalMapObjectTestItemDestroyedDropModel();
private:
    UFUNCTION(BlueprintCallable)
    void OnDestroy_ServerInternal(UPalMapObjectModel* Model);
    
};

