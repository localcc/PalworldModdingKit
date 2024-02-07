#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EPalActionType.h"
#include "EPalWorkType.h"
#include "PalGameWorldDataSaveInterface.h"
#include "PalWorkAssignDefineData.h"
#include "PalWorkAssignHandleId.h"
#include "PalWorldSubsystem.h"
#include "PalWorkProgressManager.generated.h"

class UPalWorkAssign;
class UPalWorkBase;

UCLASS(Blueprintable, Config=Game)
class UPalWorkProgressManager : public UPalWorldSubsystem, public IPalGameWorldDataSaveInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWorkDelegate, UPalWorkBase*, Work);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, UPalWorkBase*> WorkMap_InServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FPalWorkAssignDefineData> WorkAssignDefineMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalWorkAssignDefineData NotWorkableAssignDefine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalWorkAssignDefineData BuildAssignDefine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EObjectTypeQuery>> SearchWorkObjectObjectTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalWorkType, EPalActionType> WorkCompleteActionMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FGuid> LevelObjectWorkIdMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalWorkBase*> MoveCheckWorkList_InServer_Async;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalWorkBase*> MovedWorkList_InServer_Async;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MoveCheckProcessIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MoveCheckMaxNumPerFrame;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WorkTickInvokeMaxNumInOneTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EPalWorkType, int32> WorkTypeAssignPriorityMap;
    
public:
    UPalWorkProgressManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorkBase* GetWorkByAssignId(const FPalWorkAssignHandleId& WorkAssignId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorkAssign* GetWorkAssign(const FPalWorkAssignHandleId& WorkAssignId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalWorkBase* GetWork(const FGuid& WorkId) const;
    

    // Fix for true pure virtual functions not being implemented
};

