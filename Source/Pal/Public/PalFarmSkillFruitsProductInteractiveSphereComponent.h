#pragma once
#include "CoreMinimal.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalInteractiveObjectSphereComponent.h"
#include "PalFarmSkillFruitsProductInteractiveSphereComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalFarmSkillFruitsProductInteractiveSphereComponent : public UPalInteractiveObjectSphereComponent, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTriggerInteractDelegate, int32, ProductIndex, AActor*, Actor);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProductIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StaticItemId, meta=(AllowPrivateAccess=true))
    FName StaticItemId;
    
public:
    UPalFarmSkillFruitsProductInteractiveSphereComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnTriggeringInteract(AActor* OtherActor, EPalInteractiveObjectIndicatorType IndicatorType);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StaticItemId();
    

    // Fix for true pure virtual functions not being implemented
};

