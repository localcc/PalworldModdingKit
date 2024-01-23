#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "PalUserWidget.h"
#include "PalUIActionWidgetForPlayerInput.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIActionWidgetForPlayerInput : public UPalUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BindInputActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverrideMouseInputActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OverridePadInputActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OverrideInputType;
    
public:
    UPalUIActionWidgetForPlayerInput();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateImage(FSlateBrush newBrush);
    
    UFUNCTION(BlueprintCallable)
    void UnbindInputMethodChangeEvent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnKeyConfigChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeOverrideType(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    void ChangeOverridePadBindActionName(const FName& NewActionName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeOverrideMouseBindActionName(const FName& NewActionName);
    
    UFUNCTION(BlueprintCallable)
    void ChangeBindActionName(const FName& NewActionName);
    
    UFUNCTION(BlueprintCallable)
    void BindInputMethodChangeEvent();
    
};

