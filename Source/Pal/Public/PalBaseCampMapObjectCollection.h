#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalStatusID.h"
#include "PalMapObjectDisposeOptions.h"
#include "PalBaseCampMapObjectCollection.generated.h"

class UPalMapObjectConcreteModelBase;
class UPalMapObjectModel;
class UPalMapObjectModelEffectBase;
class UPalMapObjectModelEffect_AccumulateTrigger;

UCLASS(Blueprintable)
class UPalBaseCampMapObjectCollection : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapObjectInstanceDelegate, UPalMapObjectModel*, Model);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMapObjectConcreteModelDelegate, UPalMapObjectConcreteModelBase*, Model);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> BurningMapObjectInstanceIds;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapObjectInstanceDelegate OnRegisteredMapObjectInstance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapObjectConcreteModelDelegate OnAvailableConcreteModelDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMapObjectConcreteModelDelegate OnNotAvailableConcreteModelDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> MapObjectInstanceIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> DropItemConcreteModelInstanceIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> DefenseAttackModelInstanceIds;
    
public:
    UPalBaseCampMapObjectCollection();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggeredBurnAnyMapObject(UPalMapObjectModelEffect_AccumulateTrigger* This, UPalMapObjectModel* OwnerModel);
    
    UFUNCTION(BlueprintCallable)
    void OnRemovedEffectAnyMapObject(UPalMapObjectModel* OwnerModel, UPalMapObjectModelEffectBase* Effect, EPalStatusID StatusId);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNotAvailableConcreteModel_ServerInternal(UPalMapObjectConcreteModelBase* Model);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGrantedEffectAnyMapObject(UPalMapObjectModel* OwnerModel, UPalMapObjectModelEffectBase* Effect);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDisposeMapObject(UPalMapObjectModel* Model, const FPalMapObjectDisposeOptions& Options);
    
    UFUNCTION(BlueprintCallable)
    void OnAvailableConcreteModel_ServerInternal(UPalMapObjectConcreteModelBase* Model);
    
};

