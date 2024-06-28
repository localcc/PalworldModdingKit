#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "EPalIncidentState.h"
#include "PalIncidentExecutionSettings.h"
#include "PalIncidentIdParameter.h"
#include "PalIncidentSystemFunctionAccessor.h"
#include "PalNPCTalkSystemCustomFunctionParameters.h"
#include "PalIncidentBase.generated.h"

class UPalIncidentBase;
class UPalIncidentDynamicParameter;
class UPalPlayerInventoryData;

UCLASS(Blueprintable)
class PAL_API UPalIncidentBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalIncidentExecutionSettings ExecSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalIncidentIdParameter IdParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIncidentBase* ParentIncident;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIncidentDynamicParameter* DynamicParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalIncidentSystemFunctionAccessor FunctionAccessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* OccuredObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* OwnerObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalIncidentState ExecState;
    
public:
    UPalIncidentBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicParameter(UPalIncidentDynamicParameter* Parameter);
    
protected:
    UFUNCTION(BlueprintCallable)
    int32 RequestConsumeInventoryItem(UPalPlayerInventoryData* InventoryData, FName ItemId, int32 ConsumeNum);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialized();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGenerated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnForceStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCustomEvent(const FName& CustomEventName, const FPalNPCTalkSystemCustomFunctionParameters& Parameter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChildInitialized(UPalIncidentBase* Child);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCanceled();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBegin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsExistCustomEvent(const FName& CustomEventName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecuting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompleted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCanceled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOption(const FName& Option) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIncidentBase* GetRootIncident() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIncidentBase* GetParentIncident() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetOccuredObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetIncidentType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetIncidentId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalIncidentDynamicParameter* GetDynamicParameter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetArgs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetArg(int32 Index) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceStop();
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DropItem(FName ItemId, int32 DropNum, FVector SpawnLocation, FVector ReleaseDirection);
    
};

