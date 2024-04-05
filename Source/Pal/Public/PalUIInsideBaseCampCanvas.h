#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPalBaseCampPassiveEffectWorkHardType.h"
#include "EPalBaseCampWorkerDirectionBattleType.h"
#include "PalBaseCampTaskCheckedData.h"
#include "PalBaseCampTaskDataSet.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalInsideBaseCampUI_DisplayItemInfo.h"
#include "PalUserWidget.h"
#include "Templates/SubclassOf.h"
#include "PalUIInsideBaseCampCanvas.generated.h"

class UPalBaseCampModel;
class UPalBaseCampTaskChecker;
class UPalIndividualCharacterSlot;
class UPalLogWidgetBase;
class UPalMapObjectBaseCampPassiveWorkHardModel;
class UPalMapObjectBaseCampWorkerDirectorModel;
class UPalMapObjectConcreteModelBase;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIInsideBaseCampCanvas : public UPalUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUpdateInsideBaseCampWokerBattleType, EPalBaseCampWorkerDirectionBattleType, BattleType);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLeavePalBoxAreaDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnterPalBoxAreaDelegate);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterPalBoxAreaDelegate OnEnterPalBoxAreaDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLeavePalBoxAreaDelegate OnLeavePalBoxAreaDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateInsideBaseCampWokerBattleType OnUpdateInsideBaseCampWokerBattleType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalBaseCampTaskChecker* taskChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float palboxAreaRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalLogWidgetBase> allTaskCompletedLogClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid lastInsideBaseCampID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FPalDataTableRowName_ItemData, FPalInsideBaseCampUI_DisplayItemInfo> displayItemInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalBaseCampTaskCheckedData CachedTaskCheckData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPalMapObjectBaseCampWorkerDirectorModel>> WeakBaseCampWorkerDirectorModelArray;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UPalMapObjectBaseCampPassiveWorkHardModel>> WeakBaseCampWorkHardModelArray;
    
public:
    UPalUIInsideBaseCampCanvas();

protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterTaskProgressEvent(const UPalBaseCampModel* Model);
    
    UFUNCTION(BlueprintCallable)
    void ResetCollectedBaseCampWorkerInfo();
    
    UFUNCTION(BlueprintCallable)
    void ResetCachedTaskCheckData();
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveAllTaskCompletedLog();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterTaskProgressEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateBaseCampWorkerDirectorBattleType(UPalMapObjectBaseCampWorkerDirectorModel* Model);
    
    UFUNCTION(BlueprintCallable)
    void OnNotAvailableInsideBaseCampMapObjectConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnAvailableInsideBaseCampMapObjectConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistWorkHardModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistWorkerDirectorModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalBaseCampPassiveEffectWorkHardType GetWorkHardType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTaskData(FPalBaseCampTaskDataSet& outTaskData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetLocalPlayerGroupID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampModel* GetInsideBaseCampModel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBaseCampPalSlots(TArray<UPalIndividualCharacterSlot*>& OutSlots);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseCampPalBedCount();
    
    UFUNCTION(BlueprintCallable)
    void CollectBaseCampWorkerInfo();
    
    UFUNCTION(BlueprintCallable)
    bool CheckTask(FPalBaseCampTaskCheckedData& outCheckedData);
    
    UFUNCTION(BlueprintCallable)
    void CheckItemNum(TMap<FName, int64>& outItemNumMap, int64& outFoodNum);
    
    UFUNCTION(BlueprintCallable)
    void CheckInsidePalBox();
    
};

