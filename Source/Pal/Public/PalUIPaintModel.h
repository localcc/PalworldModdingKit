#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "EPalMapObjectOperationResult.h"
#include "OnPaintResultChangedDelegate.h"
#include "PalBuildObjectPaintData.h"
#include "PalMapObjectObjectPaintPalette.h"
#include "PalUIPaintModel.generated.h"

class APalBuildObject;
class UPalUIPaintModel;

UCLASS(Blueprintable)
class PAL_API UPalUIPaintModel : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUpdatePaletteIndexDelegate, UPalUIPaintModel*, Model, int32, LastPaletteIndex);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalUIPaintModel*, Model);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReturnSelfAndIndexDelegate, UPalUIPaintModel*, Model, int32, PaletteIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPaintResultChanged OnPaintResultChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUpdatePaletteIndexDelegate OnUpdateTriggerPaletteIndexDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfAndIndexDelegate OnUpdatePaletteColorDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APalBuildObject> TargetBuildObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsTargetPaintEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalMapObjectObjectPaintPalette CurrentPalette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalMapObjectOperationResult CurrentPaintResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPaintTriggerActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTriggerPaintToClear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TriggerPaletteIndex;
    
public:
    UPalUIPaintModel();

    UFUNCTION(BlueprintCallable)
    void StopRemoveColorTrigger();
    
    UFUNCTION(BlueprintCallable)
    void StopPaintTrigger();
    
    UFUNCTION(BlueprintCallable)
    void StartRemoveColorTrigger();
    
    UFUNCTION(BlueprintCallable)
    void StartPaintTrigger();
    
    UFUNCTION(BlueprintCallable)
    void StartBuildingMode();
    
    UFUNCTION(BlueprintCallable)
    void SetTriggerPaletteIndex(int32 NewPaletteIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetBuildObject(APalBuildObject* InTargetObject);
    
    UFUNCTION(BlueprintCallable)
    void SetPaletteColor(int32 PaletteIndex, const FColor& NewColor);
    
    UFUNCTION(BlueprintCallable)
    void ResetToOriginalColor();
    
    UFUNCTION(BlueprintCallable)
    void PickColorFromTarget(int32 PaletteIndex);
    
    UFUNCTION(BlueprintCallable)
    void OpenEditPaletteMenu();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSubmitColorEditorMenu(const FLinearColor& Color);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadPalette();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaintTriggerActive() const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(APalBuildObject* InTargetObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasGuildPermission() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetTriggerPaintColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPalBuildObjectPaintData GetTargetCurrentPaintData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetTargetCurrentColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetPaletteColor(int32 PaletteIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetPaintResultMessage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalMapObjectOperationResult GetCurrentPaintResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FColor> GetAllPaletteColors() const;
    
    UFUNCTION(BlueprintCallable)
    void FinishPainting();
    
    UFUNCTION(BlueprintCallable)
    void ExecutePaint(const FColor& NewColor);
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPickColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPaintWithResult(EPalMapObjectOperationResult& OutResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPaint() const;
    
};

