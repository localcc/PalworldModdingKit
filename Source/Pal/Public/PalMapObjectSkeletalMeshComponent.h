#pragma once
#include "CoreMinimal.h"
#include "FlagContainer.h"
#include "PalInstanceID.h"
#include "PalSkeletalMeshComponent.h"
#include "PalMapObjectSkeletalMeshComponent.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalMapObjectConcreteModelModuleBase;
class UPalMapObjectWorkeeModule;
class UPalWorkBase;
class UPalWorkProgress;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectSkeletalMeshComponent : public UPalSkeletalMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimateInWorking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_bAnimating, meta=(AllowPrivateAccess=true))
    bool bAnimating;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer TickableFlagContainer;
    
public:
    UPalMapObjectSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnWorkEnded(UPalWorkBase* Work, const FPalInstanceID& IndividualId);
    
    UFUNCTION(BlueprintCallable)
    void OnWorkDisposed(UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateAssignedCharacter(UPalWorkBase* Work);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bAnimating();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnReadyWork(UPalMapObjectWorkeeModule* Module, UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void OnReadyModule_Workee(UPalMapObjectConcreteModelBase* ConcreteModel, UPalMapObjectConcreteModelModuleBase* Module);
    
    UFUNCTION(BlueprintCallable)
    void OnChangedInProgress(UPalWorkProgress* WorkProgress);
    
};

