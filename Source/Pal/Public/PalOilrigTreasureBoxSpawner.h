#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalMapObjectOperationResult.h"
#include "EPalOilrigType.h"
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalLevelObjectActor.h"
#include "PalOilrigHandledActorInterface.h"
#include "Templates/SubclassOf.h"
#include "PalOilrigTreasureBoxSpawner.generated.h"

class AActor;

UCLASS(Blueprintable)
class PAL_API APalOilrigTreasureBoxSpawner : public APalLevelObjectActor, public IPalOilrigHandledActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOnlyOneBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_MapObjectData SpawnMapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_FieldLotteryNameData FieldLotteryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> OnlyOneBoxEmptyBoxActorClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalOilrigType SelfOilrigType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid MapObjectModelInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* MapObjectActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OnlyOneEmptyBox;
    
public:
    APalOilrigTreasureBoxSpawner(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnOpenTreasureBox();
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedSpawningMapObjectModel(FGuid InstanceId, const EPalMapObjectOperationResult Result);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnedGoalBox();
    

    // Fix for true pure virtual functions not being implemented
};

