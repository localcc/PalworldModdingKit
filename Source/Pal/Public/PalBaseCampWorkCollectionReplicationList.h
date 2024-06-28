#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalFastBaseCampWorkCollectionRepInfoArray.h"
#include "PalBaseCampWorkCollectionReplicationList.generated.h"

class UPalBaseCampWorkCollectionReplicationList;

UCLASS(Blueprintable)
class PAL_API UPalBaseCampWorkCollectionReplicationList : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalBaseCampWorkCollectionReplicationList*, Self);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnUpdateWorkListDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_RepInfoArray, meta=(AllowPrivateAccess=true))
    FPalFastBaseCampWorkCollectionRepInfoArray RepInfoArray;
    
public:
    UPalBaseCampWorkCollectionReplicationList();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RepInfoArray();
    
};

