#pragma once
#include "CoreMinimal.h"
#include "Engine/HitResult.h"
#include "Components/SphereComponent.h"
#include "PalInstanceID.h"
#include "PalSpeedCollisionComponent.generated.h"

class AActor;
class UPalActionBase;
class UPalActionComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalSpeedCollisionComponent : public USphereComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsSelfEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalInstanceID> HitPalList;
    
public:
    UPalSpeedCollisionComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnAllActionEnd(const UPalActionComponent* ActionComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnActionBegin(const UPalActionBase* action);
    
    UFUNCTION(BlueprintCallable)
    void DelayRemoveInterval();
    
public:
    UFUNCTION(BlueprintCallable)
    void BeginOverlapEvent(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

