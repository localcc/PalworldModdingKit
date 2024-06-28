#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalPlayerDataPalStorage.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterSlot;
class UPalIndividualCharacterSlotsObserver;

UCLASS(Blueprintable)
class UPalPlayerDataPalStorage : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 PageNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 SlotNumInPage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TargetContainer, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterContainer* TargetContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterSlotsObserver* SlotObserver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SyncPageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsForceSyncAllSlot;
    
public:
    UPalPlayerDataPalStorage();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateCharacterContainer_InServer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetContainer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSlotsInPage(const int32 pageIndex, TArray<UPalIndividualCharacterSlot*>& Slots) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterSlot* GetSlot(const int32 pageIndex, const int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPageNum() const;
    
};

