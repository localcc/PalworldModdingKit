#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalContainerId.h"
#include "PalDimensionPalStorageSaveParameter.h"
#include "PalUserWidget.h"
#include "PalUIDImensionPalStorageList.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterHandleReference;
class UPalIndividualCharacterSlot;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIDImensionPalStorageList : public UPalUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId LocalDPSContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterContainer* LocalDPSContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandleReference*> DummyHandleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPalDimensionPalStorageSaveParameter> CurrentPageData;
    
public:
    UPalUIDImensionPalStorageList();

    UFUNCTION(BlueprintCallable)
    void Setup(const FGuid& OpenLockerConcreteModelInstanceId);
    
    UFUNCTION(BlueprintCallable)
    void RequestUpdatePage(int32 NewPageNum);
    
    UFUNCTION(BlueprintCallable)
    void RefreshPage();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdatePageData(const TArray<FPalDimensionPalStorageSaveParameter>& NewPageData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatedPageNum_BP(int32 NewPageNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatedPageData_BP(const TArray<FPalDimensionPalStorageSaveParameter>& NewPageData);
    
    UFUNCTION(BlueprintCallable)
    void OnUpdateCurrentPageNum(int32 NewPageNum);
    
    UFUNCTION(BlueprintCallable)
    void OnSortedLocker();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSlots(TArray<UPalIndividualCharacterSlot*>& OutSlots) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDPSContainerId(FPalContainerId& OutID) const;
    
};

