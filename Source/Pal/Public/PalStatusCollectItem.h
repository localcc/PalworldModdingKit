#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalStaticItemIdAndNum.h"
#include "PalStatusBase.h"
#include "PalStatusCollectItem.generated.h"

class UPalPlayerInventoryData;

UCLASS(Blueprintable)
class PAL_API UPalStatusCollectItem : public UPalStatusBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalStaticItemIdAndNum CollectItemInfo;
    
public:
    UPalStatusCollectItem();
    UFUNCTION(BlueprintCallable)
    void TickStatus_Implementation(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void SetCollectItemInfo(const FPalStaticItemIdAndNum& ItemIDAndNum);
    
    UFUNCTION(BlueprintCallable)
    void OnEndStatus_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void OnBreakStatus_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginStatus_Implementation();
    
    UFUNCTION(BlueprintCallable)
    void OnBeginSomeStatus_Implementation();
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsThrown() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsServer() const;
    
private:
    UFUNCTION(BlueprintCallable)
    bool IsRestrictedByWorkerEvent() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsRestrictedByWork() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsLifted() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHealth() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBattleMode() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalPlayerInventoryData* GetOwnerPlayerInventoryData() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalStaticItemIdAndNum GetCollectItemInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void DropItem(FName ItemId, int32 DropNum, FVector SpawnLocation, FVector ReleaseDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSpawnItem() const;
    
};

