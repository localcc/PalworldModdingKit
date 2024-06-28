#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EPalSupplyType.h"
#include "PalSupplyDropActor.generated.h"

class APalMapObject;
class UPalMapObjectModel;

UCLASS(Blueprintable)
class PAL_API APalSupplyDropActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 KnockBackMaxPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandHitDamageRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector Velocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    EPalSupplyType SupplyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FTimespan TotalFallTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid SpawnerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MapObjectID, meta=(AllowPrivateAccess=true))
    FGuid MapObjectId;
    
public:
    APalSupplyDropActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnReplicateMapObjectModel(UPalMapObjectModel* MapObjectModel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MapObjectID();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLanded_BP();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnCreateMapObject(APalMapObject* MapObject);
    
};

