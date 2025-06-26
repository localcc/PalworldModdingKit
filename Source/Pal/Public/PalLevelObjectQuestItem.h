#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "EPalInteractiveObjectIndicatorType.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalInteractiveObjectIndicatorInterface.h"
#include "PalLevelObjectActor.h"
#include "Templates/SubclassOf.h"
#include "PalLevelObjectQuestItem.generated.h"

class AActor;
class APalPlayerState;
class UPalItemContainer;
class UPalQuestBlock;

UCLASS(Blueprintable)
class PAL_API APalLevelObjectQuestItem : public APalLevelObjectActor, public IPalInteractiveObjectIndicatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle QuestId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalQuestBlock> QuestBlockClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData ItemId;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CheckTimerHandle;
    
public:
    APalLevelObjectQuestItem(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void RemovePickupBlockInLocal();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateInventory(UPalItemContainer* Container);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdatedQuest(const FName& InQuestId);
    
    UFUNCTION(BlueprintCallable)
    void OnTriggerInteract(AActor* Other, EPalInteractiveObjectIndicatorType IndicatorType);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPickupInLocal();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOrderedQuest(const FName& InQuestId);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleteSyncPlayer(APalPlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedQuest(const FName& InQuestId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChangedActiveInLocal(bool bIsActive);
    

    // Fix for true pure virtual functions not being implemented
};

