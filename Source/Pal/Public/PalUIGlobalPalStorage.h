#pragma once
#include "CoreMinimal.h"
#include "EPalGlobalStorageExportResult.h"
#include "PalContainerId.h"
#include "PalGlobalPalStorageExportOption.h"
#include "PalGlobalPalStorageImportOption.h"
#include "PalInstanceID.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIGlobalPalStorage.generated.h"

class UPalIndividualCharacterSlot;
class UPalUIGlobalPalStorageList;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIGlobalPalStorage : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId LocalGPSContainerId;
    
public:
    UPalUIGlobalPalStorage();

protected:
    UFUNCTION(BlueprintCallable)
    bool ToggleFavorite(UPalIndividualCharacterSlot* TargetSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldShowPopup() const;
    
    UFUNCTION(BlueprintCallable)
    void SelectSlot(UPalIndividualCharacterSlot* SelectedSlot);
    
    UFUNCTION(BlueprintCallable)
    bool SaveGPSDataAsync();
    
    UFUNCTION(BlueprintCallable)
    void RegisterGPSLocalContainerId(const FPalContainerId& InLocalContainerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartImport(int32 GPSDataIndex, int32 TargetSlotIndex, const FPalGlobalPalStorageImportOption& ImportOption);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadyGPSSubsystem();
    
    UFUNCTION(BlueprintCallable)
    bool LoadGPSData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInGamePalStorageSlot(UPalIndividualCharacterSlot* TargetSlot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGPSSlot(UPalIndividualCharacterSlot* TargetSlot) const;
    
    UFUNCTION(BlueprintCallable)
    void ImportGPSDataToEmptySlot(int32 ImportGPSDataIndex, const FPalGlobalPalStorageImportOption& ImportOption, int32 RootImportPalBoxPage);
    
    UFUNCTION(BlueprintCallable)
    void ImportGPSData(int32 ImportGPSDataIndex, int32 TargetSlotIndex, const FPalGlobalPalStorageImportOption& ImportOption);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleExportSuccess(int32 ExportDataIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleExportFailed(EPalGlobalStorageExportResult Result, UPalIndividualCharacterSlot* TargetSlot, int32 ExportDataIndex, const FPalGlobalPalStorageExportOption& ExportOption);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPalUIGlobalPalStorageList* GetGlobalStorageListUI() const;
    
    UFUNCTION(BlueprintCallable)
    void ExportGPSDataToEmptySlot(UPalIndividualCharacterSlot* TargetSlot, const FPalGlobalPalStorageExportOption& ExportOption, int32 RootSearchPageNum);
    
    UFUNCTION(BlueprintCallable)
    void ExportGPSData(UPalIndividualCharacterSlot* TargetSlot, int32 ExportDataIndex, const FPalGlobalPalStorageExportOption& ExportOption);
    
    UFUNCTION(BlueprintCallable)
    void DeleteGPSData(const TArray<FPalInstanceID>& RemoveInstanceIDArray);
    
};

