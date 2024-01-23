#pragma once
#include "CoreMinimal.h"
#include "EPalNPCTalkSelectedChoiceResult.h"
#include "PalUserWidgetOverlayUI.h"
#include "PalTalkWindowWidgetBase.generated.h"

class UPalNPCTalkSystem;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalTalkWindowWidgetBase : public UPalUserWidgetOverlayUI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalNPCTalkSystem* talkSystem;
    
public:
    UPalTalkWindowWidgetBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowChoice(const TArray<FName>& choiceTextIDList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTalkerName(const FName& Text);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMainTextList(const TArray<FName>& textIDList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestClose();
    
protected:
    UFUNCTION(BlueprintCallable)
    EPalNPCTalkSelectedChoiceResult NotifyChoiceIndex(int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasArguments() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateTextAppliedArgments(const FText& OrgText, FText& OutText);
    
    UFUNCTION(BlueprintCallable)
    void AddArgument(const FString& Key, const FText& Text);
    
};

