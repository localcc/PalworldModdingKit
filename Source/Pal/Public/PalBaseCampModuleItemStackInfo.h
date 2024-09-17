#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampFunctionModuleBase.h"
#include "PalFastBaseCampItemStackRepInfoArray.h"
#include "PalMapObjectPasswordLockPlayerInfo.h"
#include "PalBaseCampModuleItemStackInfo.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalMapObjectItemChestModel;
class UPalMapObjectItemContainerModule;
class UPalMapObjectPasswordLockModule;

UCLASS(Blueprintable)
class PAL_API UPalBaseCampModuleItemStackInfo : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable)
    void OnNotAvailableConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnAvailableConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
};

