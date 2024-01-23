#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "PalDeadInfo.h"
#include "PalBaseCampEnemyObserver.generated.h"

class AActor;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class UPalBaseCampEnemyObserver : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBaseCampEnemyDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseCampEnemyDelegate OnFirstAppearEnemyDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseCampEnemyDelegate OnEmptyEnemyDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBaseCampEnemyDelegate OnPassedTimeAfterEmptyEnemyDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid BaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandle*> EnemyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CampAreaRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CampLocation;
    
public:
    UPalBaseCampEnemyObserver();
private:
    UFUNCTION(BlueprintCallable)
    void OnEndPlayEnemy(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
    UFUNCTION(BlueprintCallable)
    void OnDeadEnemy(FPalDeadInfo DeadInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleMode() const;
    
};

