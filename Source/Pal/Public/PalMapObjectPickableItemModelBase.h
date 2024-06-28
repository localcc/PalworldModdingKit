#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "PalItemAndNum.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectPickableItemModelBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UPalMapObjectPickableItemModelBase : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bAutoPickedUp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle RemovePickupGuardTimerHandle;
    
public:
    UPalMapObjectPickableItemModelBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void RequestPickup_ServerInternal(const int32 RequestPlayerId, const bool bByAutoPickup);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestPickup(const bool bByAutoPickup);
    
    UFUNCTION(BlueprintCallable)
    void OnTimer_RemovePickupGuard();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPalItemAndNum> CreatePickupItemInfo() const;
    
};

