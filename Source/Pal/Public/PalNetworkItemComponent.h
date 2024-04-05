#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EPalItemOperationResult.h"
#include "PalContainerId.h"
#include "PalItemAndSlot.h"
#include "PalItemSlotId.h"
#include "PalItemSlotIdAndNum.h"
#include "PalNetArchive.h"
#include "PalNetworkContainerParameter.h"
#include "PalNetworkDynamicItemParameter.h"
#include "PalNetworkItemOperationParameter.h"
#include "PalNetworkParameter.h"
#include "PalStaticItemIdAndNum.h"
#include "PalNetworkItemComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkItemComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalNetworkDynamicItemParameter> DynamicItemParamMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalNetworkContainerParameter> ContainerParamMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalNetworkItemOperationParameter> ItemOperationParamMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalNetworkParameter> OperationParamMap;
    
public:
    UPalNetworkItemComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestSwap_ToServer(const FGuid& RequestID, const FPalItemSlotId& SlotA, const FPalItemSlotId& SlotB);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestProduceWithSlot_ToServer(const FGuid& RequestID, const FPalStaticItemIdAndNum& ProductData, const FPalItemAndSlot& To, const FPalNetArchive& CreateParamArchive);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestProduce_ToServer(const FGuid& RequestID, const FPalStaticItemIdAndNum& ProductData, const FPalContainerId& ContainerId, const FPalNetArchive& CreateParamArchive);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestMoveToContainer_ToServer(const FGuid& RequestID, const FPalContainerId& ToContainerId, const TArray<FPalItemSlotIdAndNum>& Froms);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestMove_ToServer(const FGuid& RequestID, const FPalItemSlotId& To, const TArray<FPalItemSlotIdAndNum>& Froms);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDrop_ToServer(const TArray<FPalItemSlotIdAndNum>& DropSlotAndNumArray, const FVector& DropLocation, bool IsAutoPickup);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void RequestDispose_ToServer(const FGuid& RequestID, const FPalItemSlotIdAndNum& SlotInfo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveProduceWithSlotResult_ToRequestClient(const FGuid& RequestID, const EPalItemOperationResult Result);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ReceiveProduceResult_ToRequestClient(const FGuid& RequestID, const EPalItemOperationResult Result);
    
};

