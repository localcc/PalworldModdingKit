#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalFoliagePresetType.h"
#include "PalCellCoord.h"
#include "PalFoliageInstanceId.h"
#include "PalMapObjectFoliageModel.generated.h"

class UPalFoliageInstance;
class UPalMapObjectFoliageModel;

UCLASS(Blueprintable)
class UPalMapObjectFoliageModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalMapObjectFoliageModel*, Self);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInstanceDelegate, UPalFoliageInstance*, Instance);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInstanceDamageDelegate, UPalFoliageInstance*, Instance, const int32, DamageValue);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstanceDelegate OnRespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstanceDamageDelegate OnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstanceDelegate OnDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnUpdatedRequiredTickInServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnDisposeModelDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ModelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FPalFoliageInstanceId, UPalFoliageInstance*> InstanceMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalCellCoord CellCoord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalFoliagePresetType FoliagePresetType;
    
public:
    UPalMapObjectFoliageModel();
private:
    UFUNCTION(BlueprintCallable)
    void RespawnInstance(UPalFoliageInstance* Instance);
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyInstance(UPalFoliageInstance* Instance);
    
};

