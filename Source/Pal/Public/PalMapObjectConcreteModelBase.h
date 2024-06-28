#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "EPalMapObjectConcreteModelModuleType.h"
#include "PalFastMapObjectModuleRepInfoArray.h"
#include "PalMapObjectModuleDelegateDelegate.h"
#include "PalMapObjectModuleMulticastDelegateDelegate.h"
#include "PalMapObjectConcreteModelBase.generated.h"

class AActor;
class APalMapObject;
class UPalBaseCampModel;
class UPalMapObjectCharacterContainerModule;
class UPalMapObjectConcreteModelBase;
class UPalMapObjectEnergyModule;
class UPalMapObjectItemContainerModule;
class UPalMapObjectPasswordLockModule;
class UPalMapObjectSwitchModule;
class UPalMapObjectWorkeeModule;

UCLASS(Abstract, Blueprintable)
class PAL_API UPalMapObjectConcreteModelBase : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleDelegate, UPalMapObjectConcreteModelBase*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDelegate OnAvailableDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDelegate OnNotAvailableDelegate;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FPalMapObjectModuleMulticastDelegate> OnSpawnedReadyModuleDelegateMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid ModelInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bDisposed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPalFastMapObjectModuleRepInfoArray ModuleRepInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalMapObjectWorkeeModule* WorkeeModuleCache;
    
public:
    UPalMapObjectConcreteModelBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName TryGetMapObjectId();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggeringInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType, const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnStartTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ModuleArray();
    
    UFUNCTION(BlueprintCallable)
    void OnEndTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectWorkeeModule* GetWorkeeModule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectSwitchModule* GetSwitchModule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectPasswordLockModule* GetPasswordLockModule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMapObjectLocation(FVector& outVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectItemContainerModule* GetItemContainerModule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetInstanceId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectEnergyModule* GetEnergyModule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectCharacterContainerModule* GetCharacterContainerModule() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampModel* GetBaseCampModelBelongTo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetBaseCampIdBelongTo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APalMapObject* GetActor() const;
    
    UFUNCTION(BlueprintCallable)
    void CallOrRegisterOnReadyModule(const EPalMapObjectConcreteModelModuleType ModuleType, FPalMapObjectModuleDelegate Delegate);
    
};

