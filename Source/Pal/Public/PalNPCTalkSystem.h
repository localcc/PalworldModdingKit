#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FlagContainer.h"
#include "PalNPCTalkSystemCustomFunctionInterface.h"
#include "PalNPCTalkSystem.generated.h"

class UPalNPCTalkDynamicParameter;
class UPalNPCTalkSystem;
class UPalTalkWindowWidgetBase;

UCLASS(Blueprintable)
class PAL_API UPalNPCTalkSystem : public UObject, public IPalNPCTalkSystemCustomFunctionInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndText, UPalNPCTalkSystem*, SelfTalkSystem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FConfirmChoice, UPalNPCTalkSystem*, SelfTalkSystem, const FName&, ChoiceMsgID, const int32, ChoiceIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndText OnEndTextDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConfirmChoice OnConfirmChoiceDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalTalkWindowWidgetBase* TalkWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlagContainer TalkWidgetVisibleFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> TextArgumentMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UPalNPCTalkDynamicParameter*> DynamicParameters;
    
public:
    UPalNPCTalkSystem();

    UFUNCTION(BlueprintCallable)
    void SetVisibleTalkHUD(const FName& FlagKey, bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetDynamicParameters(const FName& ParameterName, UPalNPCTalkDynamicParameter* InParameter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEndText(UPalTalkWindowWidgetBase* SelfTalkWidget);
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmChoice(UPalTalkWindowWidgetBase* SelfTalkWidget, const FName& ChoiceMsgID, const int32 ChoiceIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalNPCTalkDynamicParameter* GetDynamicParameters(const FName& ParameterName);
    
    UFUNCTION(BlueprintCallable)
    void AddCustomTextTagArgument(const FName& TagName, const FString& ArgumentString);
    

    // Fix for true pure virtual functions not being implemented
};

