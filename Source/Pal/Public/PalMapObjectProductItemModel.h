#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalWorkProgressWorkableCheckInterface.h"
#include "PalMapObjectProductItemModel.generated.h"

class UPalItemContainer;
class UPalMapObjectProductItemModel;
class UPalWorkBase;

UCLASS(Blueprintable)
class UPalMapObjectProductItemModel : public UPalMapObjectConcreteModelBase, public IPalWorkProgressWorkableCheckInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSimpleDelegate, UPalMapObjectProductItemModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSimpleDelegate OnFinishProductOneLoopDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsWorkable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName ProductItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WorkSpeedAdditionalRate;
    
public:
    UPalMapObjectProductItemModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateContainerContent(UPalItemContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishWorkInServer(UPalWorkBase* Work);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetProductItemId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalItemContainer* GetItemContainer() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float CalcRequiredAmount(const float BaseRequiredAmount) const;
    

    // Fix for true pure virtual functions not being implemented
};

