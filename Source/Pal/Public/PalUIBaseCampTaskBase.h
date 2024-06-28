#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBaseCampTaskCheckedData.h"
#include "PalBaseCampTaskDataSet.h"
#include "PalUserWidgetOverlayUI.h"
#include "Templates/SubclassOf.h"
#include "PalUIBaseCampTaskBase.generated.h"

class UPalBaseCampModel;
class UPalBaseCampTaskChecker;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIBaseCampTaskBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalBaseCampTaskChecker> baseCampTaskCheckerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid BaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lastCheckedBaseCampLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalBaseCampTaskChecker* taskChecker;
    
public:
    UPalUIBaseCampTaskBase();

protected:
    UFUNCTION(BlueprintCallable)
    bool TryBaseCampLevelUp();
    
    UFUNCTION(BlueprintCallable)
    void SetTargetBaseCampID(const FGuid& TargetBaseCampID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWorkerCapacityLimited(int32 InLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCampLevelMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWorkerMaxNum(int32 InLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetNowLevelTaskData(FPalBaseCampTaskDataSet& outTaskData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampModel* GetBaseCampModel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseCampMaxNumInGuild(int32 InLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetBaseCampId();
    
    UFUNCTION(BlueprintCallable)
    bool CheckTask(FPalBaseCampTaskCheckedData& outChedckedData);
    
};

