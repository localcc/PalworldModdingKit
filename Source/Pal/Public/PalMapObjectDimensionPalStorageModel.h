#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectDimensionPalStorageModel.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS(Blueprintable)
class UPalMapObjectDimensionPalStorageModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdatePrivateLock, bool, bCurrentLocked);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatePrivateLock OnUpdatePrivateLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> DimensionPalStorageWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PrivateLock, meta=(AllowPrivateAccess=true))
    bool bPrivateLock;
    
    UPalMapObjectDimensionPalStorageModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UnlockDimensionLocker_ServerInternal(const int32 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PrivateLock();
    
    UFUNCTION(BlueprintCallable)
    void LockDimensionLocker_ServerInternal(const int32 PlayerId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOpenDimensionPalStorageMenu_LocalPlayer() const;
    
};

