#pragma once
#include "CoreMinimal.h"
#include "FlagContainer.h"
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
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFlagContainer TickableFlagContainer;
    
public:
    UPalMapObjectSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnReadyWork(UPalMapObjectWorkeeModule* Module, UPalWorkBase* Work);
    
    UFUNCTION(BlueprintCallable)
    void OnReadyModule_Workee(UPalMapObjectConcreteModelBase* ConcreteModel, UPalMapObjectConcreteModelModuleBase* Module);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeWorkInProgress(UPalWorkProgress* WorkProgress);
    
};

