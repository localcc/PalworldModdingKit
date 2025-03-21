#pragma once
#include "CoreMinimal.h"
#include "EPalGlobalStorageExportResult.h"
#include "PalContainerId.h"
#include "PalGlobalPalStorageExportOption.h"
#include "PalGlobalPalStorageImportOption.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalUIDimensionPalStorage.generated.h"

class UPalIndividualCharacterSlot;
class UPalUIDImensionPalStorageList;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIDimensionPalStorage : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalContainerId LocalDPSContainerId;
    
public:
    UPalUIDimensionPalStorage();

protected:
    UFUNCTION(BlueprintCallable)
    bool ToggleFavorite(UPalIndividualCharacterSlot* TargetSlot);
    
    UFUNCTION(BlueprintCallable)
    void SelectSlot(UPalIndividualCharacterSlot* SelectedSlot);
    
    UFUNCTION(BlueprintCallable)
    bool RequestSendAll();
    
    UFUNCTION(BlueprintCallable)
    bool RequestQuickSend(UPalIndividualCharacterSlot* TargetSlot, int32 RootPageIndex);
    
    UFUNCTION(BlueprintCallable)
    bool RequestQuickRestore(UPalIndividualCharacterSlot* TargetSlot, int32 RootPageIndex);
    
    UFUNCTION(BlueprintCallable)
    void RegisterDPSLocalContainerId(const FPalContainerId& InLocalContainerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartImport(int32 GPSDataIndex, int32 TargetSlotIndex, const FPalGlobalPalStorageImportOption& ImportOption);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadyGPSSubsystem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleExportFailed(EPalGlobalStorageExportResult Result, UPalIndividualCharacterSlot* TargetSlot, int32 ExportDataIndex, const FPalGlobalPalStorageExportOption& ExportOption);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPalUIDImensionPalStorageList* GetDimensionPalStorageListUI() const;
    
};

