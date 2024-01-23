#pragma once
#include "CoreMinimal.h"
#include "PalUserWidgetWorldHUD.h"
#include "PalUIBuildProgressWorldHUD.generated.h"

class UPalBuildProcess;
class UPalWorkBase;
class UPalWorkProgress;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIBuildProgressWorldHUD : public UPalUserWidgetWorldHUD {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UPalBuildProcess* BuildProcess;
    
public:
    UPalUIBuildProgressWorldHUD();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetProgress(UPalWorkProgress* Work);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatedAssignCharacter(UPalWorkBase* TargetWork);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestClose(UPalBuildProcess* Process);
    
    UFUNCTION(BlueprintCallable)
    void CloseSelf();
    
private:
    UFUNCTION(BlueprintCallable)
    void BindUpdateAssingedCharacterDelegate();
    
};

