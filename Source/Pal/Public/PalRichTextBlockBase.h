#pragma once
#include "CoreMinimal.h"
#include "CommonRichTextBlock.h"
#include "Engine/DataTable.h"
#include "PalOptionUISettings.h"
#include "PalRichTextBlockBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalRichTextBlockBase : public UCommonRichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BindTextDatatableHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAutoTextSetWhenWidgetRebuilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultStyleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAutoAdjustScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxWidth;
    
    UPalRichTextBlockBase();
protected:
    UFUNCTION(BlueprintCallable)
    void SetText_GDKInternal(bool IsSuccess, const FString& OutString);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUISettingChanged(const FPalOptionUISettings& PreSetting, const FPalOptionUISettings& NewSetting);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Left(const int32 Count, FText& OutText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTextLengthWithoutTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetBindedOriginalText() const;
    
};

