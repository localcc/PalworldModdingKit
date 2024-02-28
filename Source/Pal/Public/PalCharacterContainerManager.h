#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalWorldSubsystem.h"
#include "PalCharacterContainerManager.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterSlot;

UCLASS(Blueprintable)
class PAL_API UPalCharacterContainerManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalContainerId, UPalIndividualCharacterContainer*> ContainerMap_InServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalContainerId, UPalIndividualCharacterContainer*> LocalContainerMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FPalContainerId> LoadedContainerIDs;
    
public:
    UPalCharacterContainerManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetContainer(const FPalContainerId& ContainerId, UPalIndividualCharacterContainer*& Container) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterSlot* GetLocalSlot(const FPalContainerId& ContainerId, const int32 SlotIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterContainer* GetLocalContainer(const FPalContainerId& ContainerId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIndividualCharacterContainer* GetContainer(const FPalContainerId& ContainerId) const;
    

    // Fix for true pure virtual functions not being implemented
};

