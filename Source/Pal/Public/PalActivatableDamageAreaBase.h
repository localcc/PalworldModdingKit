#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalActivatableDamageAreaState.h"
#include "FloatCounter.h"
#include "PalActivatableDamageAreaBase.generated.h"

class UPalHitFilter;
class UPrimitiveComponent;
class UShapeComponent;

UCLASS(Abstract, Blueprintable)
class PAL_API APalActivatableDamageAreaBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalHitFilter* HitFilter;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DamageValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalActivatableDamageAreaState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActivatedCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActivateLoopNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatCounter ActivateLoopTimeCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFloatCounter InactivateLoopTimeCounter;
    
public:
    APalActivatableDamageAreaBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartInactivateAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartActivateAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitDamageVolume_BP(UPrimitiveComponent* MyHitComponent, AActor* OtherHitActor, UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    
    UFUNCTION(BlueprintCallable)
    void OnHitDamageVolume(UPrimitiveComponent* MyHitComponent, AActor* OtherHitActor, UPrimitiveComponent* OtherHitComponent, const TArray<int32>& FoliageIndex, FVector HitLocation, int32 HitCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UShapeComponent* GetDamageVolumeComponent();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastInactivate_Multicast();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastActivate_Multicast();
    
};

