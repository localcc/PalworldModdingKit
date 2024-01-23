#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
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
    UFUNCTION(BlueprintCallable)
    void Setup(const FName InBuildObjectId);
    
    UFUNCTION(BlueprintCallable)
    void RotateTarget(const bool bRight);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateInventory(UPalItemContainer* Container);
    
public:
    UFUNCTION(BlueprintCallable)
    void FinishBuilding();
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintCallable)
    void BuildObject(const bool bContinuously);
    
};

