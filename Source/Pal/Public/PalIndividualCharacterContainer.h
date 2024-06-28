#pragma once
#include "CoreMinimal.h"
#include "PalContainerBase.h"
#include "PalIndividualCharacterContainer.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterHandle;
class UPalIndividualCharacterSlot;

UCLASS(Blueprintable)
class UPalIndividualCharacterContainer : public UPalContainerBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateContentsDelegate, UPalIndividualCharacterContainer*, Container);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateContentsDelegate OnUpdateContentsDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateContentsDelegate OnUpdateSlotsDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Slots, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterSlot*> SlotArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCanSetFavorite;
    
public:
    UPalIndividualCharacterContainer();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Slots();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 Num() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPalIndividualCharacterSlot*> GetSlots() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterSlot* Get(const int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterSlot* FindEmptySlot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterSlot* FindByHandle(UPalIndividualCharacterHandle* Handle) const;
    
};

