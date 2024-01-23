#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/HitResult.h"
#include "Templates/SubclassOf.h"
#include "PalHitFilter.generated.h"

class AActor;
class UPalHitLocationCalculator;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew)
class UPalHitFilter : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOverlapEndDelegate, UPrimitiveComponent*, MyHitComponent, AActor*, OtherHitActor, UPrimitiveComponent*, OtherHitComponent);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnHitDelegate, UPrimitiveComponent*, MyHitComponent, AActor*, OtherHitActor, UPrimitiveComponent*, OtherHitComponent, const TArray<int32>&, FoliageIndex, FVector, HitLocation, int32, HitCount);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHitNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalHitLocationCalculator> HitLocationCalculator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsIntersectionCollision;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 IntersectionNum;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitDelegate OnHitDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOverlapEndDelegate OnOverlapEndDelegate;
    
    UPalHitFilter();
    UFUNCTION(BlueprintCallable)
    void UnbindPrimitiveComponent(UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void SetIntersectionNum(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetAttacker(AActor* Attacker);
    
    UFUNCTION(BlueprintCallable)
    void ResetFilter();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void BindPrimitiveComponent(UPrimitiveComponent* Component);
    
};

