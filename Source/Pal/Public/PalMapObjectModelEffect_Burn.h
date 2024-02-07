#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectModelEffect_AccumulateTrigger.h"
#include "PalMapObjectModelEffect_Burn.generated.h"

class AActor;
class APalHitCollisionBox;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectModelEffect_Burn : public UPalMapObjectModelEffect_AccumulateTrigger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Burning, meta=(AllowPrivateAccess=true))
    bool bBurning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PersistenceValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APalHitCollisionBox* HitCollisionBox;
    
public:
    UPalMapObjectModelEffect_Burn();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Burning(bool bLastValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHitCollisionBox(UPrimitiveComponent* MyHitComponent, AActor* OtherHitActor, UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    
};

