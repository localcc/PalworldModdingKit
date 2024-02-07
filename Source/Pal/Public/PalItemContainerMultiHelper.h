#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalStaticItemIdAndNum.h"
#include "PalItemContainerMultiHelper.generated.h"

class UPalItemContainer;
class UPalItemContainerMultiHelper;

UCLASS(Blueprintable)
class UPalItemContainerMultiHelper : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateContentDelegate, UPalItemContainerMultiHelper*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdateContentDelegate OnUpdateContentDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Containers, meta=(AllowPrivateAccess=true))
    TArray<UPalItemContainer*> Containers;
    
public:
    UPalItemContainerMultiHelper();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateContainerContent(UPalItemContainer* Container);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Containers();
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsExistItems(const TArray<FPalStaticItemIdAndNum>& StaticItemInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindByStaticItemIds(const TArray<FName>& StaticItemIds, TArray<FPalStaticItemIdAndNum>& StaticItemInfos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindByStaticItemId(const FName StaticItemId, FPalStaticItemIdAndNum& StaticItemInfo);
    
};

