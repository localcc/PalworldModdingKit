#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EPalOilrigType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalOilrigSaveStatus.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalOilrigManager.generated.h"

class AActor;
class APalOilrigController;
class IPalOilrigHandledActorInterface;
class UPalOilrigHandledActorInterface;

UCLASS(Blueprintable)
class PAL_API UPalOilrigManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalOilrigType, TSubclassOf<APalOilrigController>> OilrigControllerClassMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalOilrigType, FVector> OilrigLocationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClearedOilrigResetTimeSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MachineStartTimeSecond_ByAlarm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClearCountUpDistance;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<APalOilrigController*> ControllerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalOilrigType, FPalOilrigSaveStatus> OilrigSaveMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<IPalOilrigHandledActorInterface>> HandledActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid GroupGuid;
    
public:
    UPalOilrigManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnEndPlayNPC(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
public:
    UFUNCTION(BlueprintCallable)
    APalOilrigController* FindOilrigController(EPalOilrigType KeyName);
    
    UFUNCTION(BlueprintCallable)
    APalOilrigController* FindNearestOilrigController(FVector Location);
    
    
};

