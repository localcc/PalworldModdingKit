#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EPalOilrigCombatHeliWeaponType.h"
#include "EPalOilrigType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalOilrigCombatHeliRandomWeaponInfo.h"
#include "PalOilrigSaveStatus.h"
#include "PalWorldSubsystem.h"
#include "Templates/SubclassOf.h"
#include "PalOilrigManager.generated.h"

class AActor;
class APalCharacter;
class APalOilrigController;
class IPalOilrigHandledActorInterface;
class UPalOilrigHandledActorInterface;
class UPalIndividualCharacterHandle;

UCLASS(Blueprintable)
class PAL_API UPalOilrigManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOpenCrateDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpenCrateDelegate OnOpenCrateDelegate;
    
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGuid> FixedWeaponDestroyedSaveData;
    
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
    
    UFUNCTION(BlueprintCallable)
    EPalOilrigCombatHeliWeaponType FindCombatHeliRandomWeza(TArray<FPalOilrigCombatHeliRandomWeaponInfo> InfoList);
    
    UFUNCTION(BlueprintCallable)
    AActor* FindCombatHeliAimTarget(APalCharacter* HeliActor, float Range, FVector OilrigCenter);
    
    UFUNCTION(BlueprintCallable)
    void AddNPCToGroup(UPalIndividualCharacterHandle* Handle);
    
    
    // Fix for true pure virtual functions not being implemented
};

