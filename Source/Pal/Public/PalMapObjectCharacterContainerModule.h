#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalMapObjectConcreteModelModuleBase.h"
#include "PalMapObjectCharacterContainerModule.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterSlot;

UCLASS(Blueprintable)
class UPalMapObjectCharacterContainerModule : public UPalMapObjectConcreteModelModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TargetContainer, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterContainer* TargetContainer;
    
public:
    UPalMapObjectCharacterContainerModule();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TryMoveCharacterToContainerFrom(UPalIndividualCharacterSlot* fromSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetContainer(UPalIndividualCharacterContainer*& OutContainer) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TargetContainer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleteSetup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalContainerId GetContainerId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterContainer* GetContainer() const;
    
};

