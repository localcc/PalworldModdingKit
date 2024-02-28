#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalContainerId.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalItemContainerBelongInfo.h"
#include "PalItemOperationInfo_Move.h"
#include "PalItemSlotId.h"
#include "PalWorldSubsystem.h"
#include "PalItemContainerManager.generated.h"

class UObject;
class UPalItemContainer;
class UPalItemSlot;

UCLASS(Blueprintable)
class PAL_API UPalItemContainerManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemOperationMoveDelegate, const TArray<FPalItemOperationInfo_Move>&, OperationInfoSet);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemOperationMoveDelegate OnItemOperationMoveDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalContainerId, UPalItemContainer*> ItemContainerMap_InServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalContainerId, FPalItemContainerBelongInfo> ItemContainerBelongInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FPalContainerId> LoadedContainerIDs;
    
public:
    UPalItemContainerManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetSlot(const FPalItemSlotId& SlotID, UPalItemSlot*& Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetContainer(const FPalContainerId& ContainerId, UPalItemContainer*& Container) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGuid GetGroupIdByItemSlotId(const UObject* WorldContextObject, const FPalItemSlotId& SlotID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FGuid GetGroupIdByItemContainerId(const UObject* WorldContextObject, const FPalContainerId& ContainerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemContainer* GetContainer(const FPalContainerId& ContainerId) const;
    

    // Fix for true pure virtual functions not being implemented
};

