#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalInteractiveObjectActionType.h"
#include "FlagContainer.h"
#include "PalInteractComponentOverlapComponentSet.h"
#include "PalInteractComponent.generated.h"

class IPalInteractiveObjectComponentInterface;
class UPalInteractiveObjectComponentInterface;
class UObject;

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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UObject*, FPalInteractComponentOverlapComponentSet> InteractComponentOverlapMap;
    
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
    void StartTriggerInteract(EPalInteractiveObjectActionType ActionType, bool IsToggle);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SetEnableInteractByFlagName(const FName& flagName, const bool bEnable, const bool bTerminateInteractIfDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableInteract(const bool bEnable, const bool bTerminateInteractIfDisable);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEnableInteract(TScriptInterface<IPalInteractiveObjectComponentInterface> Component);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsToggleInteracting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteracting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableInteract() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalInteractiveObjectActionType GetTriggeringActionType() const;
    
    UFUNCTION(BlueprintCallable)
    void EndTriggerInteract(EPalInteractiveObjectActionType ActionType);
    
};

