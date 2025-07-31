#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalStageInstanceId.h"
#include "PalDungeonEntrance.generated.h"

class APalDungeonEntrance;
class UPalDungeonInstanceModel;
class UPalStageModelDungeon;

UCLASS(Blueprintable)
class PAL_API APalDungeonEntrance : public AActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfMulticastDelegate, APalDungeonEntrance*, SelfEntrance);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfMulticastDelegate OnRepStageModelDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StageModel, meta=(AllowPrivateAccess=true))
    UPalStageModelDungeon* StageModel;
    
public:
    APalDungeonEntrance(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetDungeonInstanceModel(UPalDungeonInstanceModel*& OutModel) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnResponseDialogEnterDungeon(const bool bResponse);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StageModel();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetWarpPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalStageModelDungeon* GetStageModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalStageInstanceId GetStageInstanceId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetDungeonInstanceId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetDeadItemDropPoint() const;
    

    // Fix for true pure virtual functions not being implemented
};

