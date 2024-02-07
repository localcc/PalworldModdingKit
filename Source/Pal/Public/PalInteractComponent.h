#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalInteractiveObjectActionType.h"
#include "FlagContainer.h"
#include "PalInteractComponent.generated.h"

class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalInteractComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateInteractiveObjectDelegate, TScriptInterface<IPalInteractiveObjectComponentInterface>, InteractiveObject);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStartInteractiveObjectDelegate, TScriptInterface<IPalInteractiveObjectComponentInterface>, InteractiveObject);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndInteractiveObjectDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartInteractiveObjectDelegate OnStartInteractiveObjectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndInteractiveObjectDelegate OnEndInteractiveObjectDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateInteractiveObjectDelegate OnUpdateInteractiveObjectDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IPalInteractiveObjectComponentInterface>> InteractiveObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalInteractiveObjectComponentInterface> TargetInteractiveObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IPalInteractiveObjectComponentInterface> LastInteractingObject;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagContainer InteractDisableFlags;
    
public:
    UPalInteractComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TerminateInteract();
    
    UFUNCTION(BlueprintCallable)
    void StartTriggerInteract(EPalInteractiveObjectActionType ActionType);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetEnableInteractByFlagName(const FName& flagName, const bool bEnable, const bool bTerminateInteractIfDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableInteract(const bool bEnable, const bool bTerminateInteractIfDisable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEnableInteract(TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteracting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableInteract() const;
    
    UFUNCTION(BlueprintCallable)
    void EndTriggerInteract(EPalInteractiveObjectActionType ActionType);
    
};

