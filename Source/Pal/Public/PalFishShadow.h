#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalFishBattleBehaviorType.h"
#include "PalIndividualCharacterSaveParameter.h"
#include "PalFishShadow.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class PAL_API APalFishShadow : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReachedPickLocationDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReachedPickLocationDelegate OnReachedPickLocationDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalIndividualCharacterSaveParameter CharacterSaveParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid RequestPlayerUId;
    
public:
    APalFishShadow(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpawnedRareEffect(UNiagaraSystem* Effect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSearchHit(const FVector& PickLocation);
    
    UFUNCTION(BlueprintCallable)
    void OnReachedPickLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFishingStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEscape();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMoveSpeedPerSec() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFishShadowSizeScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalFishBattleBehaviorType GetBehaviorType() const;
    
};

