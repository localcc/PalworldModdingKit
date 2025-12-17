#pragma once
#include "CoreMinimal.h"
#include "PalContainerId.h"
#include "PalUserWidget.h"
#include "PalUIGlobalPalStorageList.generated.h"

class UPalIndividualCharacterContainer;
class UPalIndividualCharacterHandleGPS;
class UPalIndividualCharacterSlot;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIGlobalPalStorageList : public UPalUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId LocalGPSContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalIndividualCharacterContainer* LocalGPSContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPalIndividualCharacterHandleGPS*> DummyHandleArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoLoadGPSData;
    
public:
    UPalUIGlobalPalStorageList();

    UFUNCTION(BlueprintCallable)
    void Setup();
    
    UFUNCTION(BlueprintCallable)
    void RefreshSlot(const int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void RefreshPage(const int32 PageNum);
    
    UFUNCTION(BlueprintCallable)
    void RefreshAllPage();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ReflectContainerToGPSData();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshSlot(const int32 SlotIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxPageNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetGPSContainerId(FPalContainerId& OutID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDummyPageSlots(const int32 PageNum, TArray<UPalIndividualCharacterSlot*>& OutSlots) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 DataIndexToPageNum(const int32 GPSDataIndex) const;
    
};

