#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "EPalKeyConfigAxisFilterType.h"
#include "EPalKeyConfigCategory.h"
#include "PalKeyConfigKeys.h"
#include "PalKeyConfigSettings.h"
#include "PalPlayerInput.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPalPlayerInput : public UPlayerInput {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnKeyConfigChangedDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKeyConfigChangedDelegate OnKeyConfigChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FKey> EnableKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FKey> DisableKeys;
    
public:
    UPalPlayerInput();
    UFUNCTION(BlueprintCallable)
    bool UpdateActionMapping(const FName InActionName, const FPalKeyConfigKeys& NewKey, EPalKeyConfigCategory Category);
    
    UFUNCTION(BlueprintCallable)
    void ResetAxisKey(const FName InAxisName, EPalKeyConfigCategory Category, EPalKeyConfigAxisFilterType FilterType);
    
    UFUNCTION(BlueprintCallable)
    void ResetActionKey(const FName InActionName, EPalKeyConfigCategory Category);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnChangeKeyConfig(const FPalKeyConfigSettings& PrevSettings, const FPalKeyConfigSettings& NewSettings);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableKey(FKey Key, EPalKeyConfigCategory InputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAxisMappingByName(const FName InAxisName, TArray<FInputAxisKeyMapping>& OutMappings) const;
    
    UFUNCTION(BlueprintCallable)
    FPalKeyConfigKeys GetAxisConfigKeys(const FName InAxisName, EPalKeyConfigCategory Category, EPalKeyConfigAxisFilterType FilterType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActionMappingByName(const FName InActionName, TArray<FInputActionKeyMapping>& OutMappings) const;
    
    UFUNCTION(BlueprintCallable)
    FPalKeyConfigKeys GetActionConfigKeys(const FName InActionName, EPalKeyConfigCategory Category);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FiltterCategoryAxisMappings(EPalKeyConfigCategory Category, EPalKeyConfigAxisFilterType FilterType, TArray<FInputAxisKeyMapping>& Mappings) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FiltterCategoryActionMappings(EPalKeyConfigCategory Category, TArray<FInputActionKeyMapping>& Mappings) const;
    
};

