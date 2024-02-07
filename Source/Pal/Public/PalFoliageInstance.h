#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EPalMapObjectItemCollectableType.h"
#include "GameDateTime.h"
#include "PalBaseCampAssignableObjectInterface.h"
#include "PalBaseCampModuleResourceCollectorTargetInterface.h"
#include "PalFoliageInstanceId.h"
#include "PalFoliageInstanceTransform.h"
#include "PalMapObjectItemCollectableInterface.h"
#include "PalMapObjectModelInterface.h"
#include "PalFoliageInstance.generated.h"

class UPalFoliageInstance;

UCLASS(Blueprintable)
class UPalFoliageInstance : public UObject, public IPalMapObjectModelInterface, public IPalMapObjectItemCollectableInterface, public IPalBaseCampAssignableObjectInterface, public IPalBaseCampModuleResourceCollectorTargetInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFoliageInstanceDelegate, UPalFoliageInstance*, Instance);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, bool> DirtyMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalFoliageInstanceId InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FName FoliageTypeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 HP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Alive, meta=(AllowPrivateAccess=true))
    bool bAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WorldTransform, meta=(AllowPrivateAccess=true))
    FPalFoliageInstanceTransform WorldTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform WorldTransformCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameDateTime RespawnTimeAt;
    
public:
    UPalFoliageInstance();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WorldTransform();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Alive(bool bOldValue);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    FGuid GetModelId() const override PURE_VIRTUAL(GetModelId, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    EPalMapObjectItemCollectableType GetItemCollectableType() const override PURE_VIRTUAL(GetItemCollectableType, return EPalMapObjectItemCollectableType::Pickup;);
    
    UFUNCTION(BlueprintCallable)
    void GetCollectableStaticItemIds(TArray<FName>& OutStaticItemIds) override PURE_VIRTUAL(GetCollectableStaticItemIds,);
    
};

