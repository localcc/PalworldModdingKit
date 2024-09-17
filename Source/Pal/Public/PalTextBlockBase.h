#pragma once
#include "CoreMinimal.h"
#include "CommonTextBlock.h"
#include "Engine/DataTable.h"
#include "PalOptionUISettings.h"
#include "PalTextBlockBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalTextBlockBase : public UCommonTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BindTextDatatableHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAutoTextSetWhenWidgetRebuilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAutoAdjustScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxWidth;
    
    UPalTextBlockBase();
    UFUNCTION(BlueprintCallable)
    void UpdateRowName(const FName RowName);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFontSize(const int32 NewSize);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetText_GDKInternal(bool IsSuccess, const FString& OutString);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUISettingChanged(const FPalOptionUISettings& PreSetting, const FPalOptionUISettings& NewSetting);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBindedOriginalText() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool BP_ReflectText();
    
};

