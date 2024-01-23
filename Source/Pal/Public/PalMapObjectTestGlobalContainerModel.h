#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectTestGlobalContainerModel.generated.h"

UCLASS(Blueprintable)
class UPalMapObjectTestGlobalContainerModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPalMapObjectTestGlobalContainerModel();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void WatchContainer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Swap(const int32 ASlotIndex, const int32 BSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ProduceWithSlotWithConsume(const FName StaticItemId, const int32 Num, const int32 SlotIndex, const int32 ConsumeSlotIndex, const int32 ConsumeNum) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ProduceWithSlot(const FName StaticItemId, const int32 Num, const int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Produce(const FName StaticItemId, const int32 Num) const;
    
    UFUNCTION(BlueprintCallable)
    void OpenContainerUI();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Move(const int32 Num, const int32 ToSlotIndex, const int32 FromSlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Dispose(const int32 SlotIndex, const int32 Num) const;
    
    UFUNCTION(BlueprintCallable)
    void CloseContainerUI();
    
};

