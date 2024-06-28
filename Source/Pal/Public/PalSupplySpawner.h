#pragma once
#include "CoreMinimal.h"
#include "EPalSupplyType.h"
#include "PalDataTableRowName_FieldLotteryNameData.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalLevelObjectActor.h"
#include "PalMapObjectDropItemData.h"
#include "Templates/SubclassOf.h"
#include "PalSupplySpawner.generated.h"

class APalRandomIncidentSpawnerBase;

UCLASS(Abstract, Blueprintable)
class PAL_API APalSupplySpawner : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_MapObjectData CapsuleMapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_FieldLotteryNameData CapsuleLotteryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_MapObjectData MeteorMapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectDropItemData MeteorPieceDropItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalRandomIncidentSpawnerBase> IncidentPalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APalRandomIncidentSpawnerBase> IncidentNPCClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeteorPieceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeteorPieceRandomMinRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeteorPieceRandomMaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafeAreaRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalSupplyType ForceSupplyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDrawSupplyLimitArea;
    
public:
    APalSupplySpawner(const FObjectInitializer& ObjectInitializer);

};

