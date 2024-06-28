#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalMapObjectOperationResult.h"
#include "PalUIBuildingModel.generated.h"

class UPalItemContainer;

UCLASS(Blueprintable)
class UPalUIBuildingModel : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName BuildObjectId;
    
public:
    UPalUIBuildingModel();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayWarningForBuildObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldDisplayChangeBuildingModeGuide() const;
    
    UFUNCTION(BlueprintCallable)
    void Setup(const FName InBuildObjectId);
    
    UFUNCTION(BlueprintCallable)
    void RotateTarget(const bool bRight);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateInventory(UPalItemContainer* Container);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOutsideBaseCamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistBaseCamp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetWarningText(const EPalMapObjectOperationResult Result);
    
    UFUNCTION(BlueprintCallable)
    void FinishBuilding();
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintCallable)
    void ChangeSnapMode(const bool bOn);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMode(const bool bOn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeSnapModeForBuildObject() const;
    
    UFUNCTION(BlueprintCallable)
    void BuildObject(const bool bContinuously);
    
};

