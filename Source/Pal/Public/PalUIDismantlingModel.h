#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalUIDismantlingModel.generated.h"

class UPalBaseCampModel;
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
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutsideBaseCamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideBaseCampForPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInsideBaseCamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampModel* GetBaseCampModelForPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampModel* GetBaseCampModel(bool bIncludeForPlayer);
    
    UFUNCTION(BlueprintCallable)
    void FinishDismantling();
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintCallable)
    void DismantleObject(const bool bContinuously);
    
};

