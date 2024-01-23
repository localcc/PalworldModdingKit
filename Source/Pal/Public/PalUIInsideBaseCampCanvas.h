#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
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
class UPalMapObjectConcreteModelBase;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIInsideBaseCampCanvas : public UPalUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLeavePalBoxAreaDelegate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnterPalBoxAreaDelegate);
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnterPalBoxAreaDelegate OnEnterPalBoxAreaDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLeavePalBoxAreaDelegate OnLeavePalBoxAreaDelegate;
    
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
    
public:
    UPalUIInsideBaseCampCanvas();
protected:
    UFUNCTION(BlueprintCallable)
    void UnregisterTaskProgressEvent(const UPalBaseCampModel* Model);
    
    UFUNCTION(BlueprintCallable)
    void ResetCachedTaskCheckData();
    
private:
    UFUNCTION(BlueprintCallable)
    void RemoveAllTaskCompletedLog();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterTaskProgressEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnNotAvailableInsideBaseCampMapObjectConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION(BlueprintCallable)
    void OnAvailableInsideBaseCampMapObjectConcreteModel(UPalMapObjectConcreteModelBase* ConcreteModel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTaskData(FPalBaseCampTaskDataSet& outTaskData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampModel* GetInsideBaseCampModel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBaseCampPalSlots(TArray<UPalIndividualCharacterSlot*>& OutSlots);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseCampPalBedCount();
    
    UFUNCTION(BlueprintCallable)
    bool CheckTask(FPalBaseCampTaskCheckedData& outCheckedData);
    
    UFUNCTION(BlueprintCallable)
    void CheckItemNum(TMap<FName, int64>& outItemNumMap, int64& outFoodNum);
    
    UFUNCTION(BlueprintCallable)
    void CheckInsidePalBox();
    
};

