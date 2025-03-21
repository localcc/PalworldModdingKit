#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ChildActorComponent.h"
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalMapObjectDisposeOptions.h"
#include "PalMapObjectSpawnerTreasureBoxLotteryParameter.h"
#include "PalEnemyCampTreasureBoxSpawnerComponent.generated.h"

class UPalMapObjectModel;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalEnemyCampTreasureBoxSpawnerComponent : public UChildActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_MapObjectData SpawnMapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_FieldLotteryNameData FieldLotteryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLotteryByMultiTreasureBoxLotteryParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalMapObjectSpawnerTreasureBoxLotteryParameter> MultiTreasureBoxLotteryParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid SpawnedMapObjectInstanceId;
    
public:
    UPalEnemyCampTreasureBoxSpawnerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void OnDisposedSpawnedModel_ServerInternal(UPalMapObjectModel* Model, const FPalMapObjectDisposeOptions& Options);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FName GetCampSpawnerName() const;
    
};

