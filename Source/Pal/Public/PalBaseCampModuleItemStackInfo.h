#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampFunctionModuleBase.h"
#include "PalFastBaseCampItemStackRepInfoArray.h"
#include "PalMapObjectPasswordLockPlayerInfo.h"
#include "PalBaseCampModuleItemStackInfo.generated.h"

class UPalBaseCampModuleItemStackInfo;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectItemChestModel;
class UPalMapObjectItemContainerModule;
class UPalMapObjectPasswordLockModule;

UCLASS(Blueprintable)
class PAL_API UPalBaseCampModuleItemStackInfo : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalBaseCampModuleItemStackInfo*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnUpdateItemStackRepInfoDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ItemStackRepInfoArray, meta=(AllowPrivateAccess=true))
    FPalFastBaseCampItemStackRepInfoArray ItemStackRepInfoArray;
    
public:
    UPalBaseCampModuleItemStackInfo();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdatePrivateLockPlayerUId_ServerInternal(UPalMapObjectItemChestModel* ItemChestModel);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatePasswordLock_ServerInternal(UPalMapObjectPasswordLockModule* PasswordLockModule, const FPalMapObjectPasswordLockPlayerInfo& NewPlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateItemContainer(UPalMapObjectItemContainerModule* ItemContainerModule);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemStackRepInfoArray();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNotAvailableConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnAvailableConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
};

