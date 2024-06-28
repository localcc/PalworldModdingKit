#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalCharacterContainerOperationResult.h"
#include "PalCharacterContainerSortInfo.h"
#include "PalCharacterSlotId.h"
#include "PalContainerId.h"
#include "PalInstanceID.h"
#include "PalNetworkCharacterContainerParameter.h"
#include "PalNetworkCharacterContainerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkCharacterContainerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalNetworkCharacterContainerParameter> ContainerParamMap;
    
public:
    UPalNetworkCharacterContainerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestUnlockSlot_ToServer(const FGuid& RequestID, const FPalCharacterSlotId& SlotID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSwap_ToServer_Rep(const FPalCharacterSlotId& SlotIdA, const FPalCharacterSlotId& SlotIdB);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSortContainer_ToServer(const FPalContainerId& ContainerId, const FPalCharacterContainerSortInfo& SortInfo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestEmptySlot_ToServer_Rep(const FPalCharacterSlotId& SlotID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestAddToContainer_ToServer_Rep(const FPalContainerId& ContainerId, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RecieveUnlockSlot_ToRequestClient(const FGuid& RequestID, const EPalCharacterContainerOperationResult Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void RecieveUnlockSlot_ToClient(const FPalCharacterSlotId& SlotID);
    
};

