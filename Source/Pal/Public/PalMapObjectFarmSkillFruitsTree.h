#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPalFarmSkillFruitsState.h"
#include "PalFarmSkillFruitsTreeGrowupProcessSet.h"
#include "PalMapObjectFarmSkillFruitsTree.generated.h"

class UPalFarmSkillFruitsProductInteractiveSphereComponent;
class UPalFarmSkillFruitsVisualComponent;

UCLASS(Blueprintable)
class PAL_API APalMapObjectFarmSkillFruitsTree : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FTriggerInteractPickupItemDelegate, AActor*, Actor);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalFarmSkillFruitsTreeGrowupProcessSet> GrowupProcessSets;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ProductStaticItemIds, meta=(AllowPrivateAccess=true))
    TArray<FName> ProductStaticItemIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
    EPalFarmSkillFruitsState CurrentState;
    
public:
    APalMapObjectFarmSkillFruitsTree(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ProductStaticItemIds(TArray<FName> PrevIds);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentState();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UPalFarmSkillFruitsVisualComponent*> GetVisualComponents() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UPalFarmSkillFruitsProductInteractiveSphereComponent*> GetInteractiveSphereComponents() const;
    
};

