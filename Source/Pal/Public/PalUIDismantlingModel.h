#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalUIDismantlingModel.generated.h"

class UPalItemContainer;

UCLASS(Blueprintable)
class UPalUIDismantlingModel : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName BuildObjectId;
    
public:
    UPalUIDismantlingModel();
    UFUNCTION(BlueprintCallable)
    void Setup();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateInventory(UPalItemContainer* Container);
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishDismantling();
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintCallable)
    void DismantleObject(const bool bContinuously);
    
};

