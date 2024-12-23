#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalGuildItemStorage.generated.h"

class UPalGuildItemStorage;
class UPalItemContainer;

UCLASS(Blueprintable)
class PAL_API UPalGuildItemStorage : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalGuildItemStorage*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnUpdateItemContainerDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ItemContainer, meta=(AllowPrivateAccess=true))
    UPalItemContainer* ItemContainer;
    
public:
    UPalGuildItemStorage();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ItemContainer();
    
};

