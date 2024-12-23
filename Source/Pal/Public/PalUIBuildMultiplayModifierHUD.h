#pragma once
#include "CoreMinimal.h"
#include "PalUserWidgetWorldHUD.h"
#include "PalUIBuildMultiplayModifierHUD.generated.h"

class UPalMapObjectMultiplayParameter;
class UPalMapObjectSignboardModel;

UCLASS(Blueprintable, EditInlineNew)
class UPalUIBuildMultiplayModifierHUD : public UPalUserWidgetWorldHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastModifiedUserName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalMapObjectSignboardModel* SignboardModel;
    
public:
    UPalUIBuildMultiplayModifierHUD();

    UFUNCTION(BlueprintCallable)
    void UpdateLastModifiedUserName();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateSignboardText(const FString& Text);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateLastModifiedUserName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalMapObjectMultiplayParameter* GetMultiplayParam();
    
};

