#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPalNPCTalkCustomFunctionResult.h"
#include "EPalNPCTalkProceedResult.h"
#include "PalNPCTalkData.h"
#include "PalNPCTalkSystemCustomFunctionInterface.h"
#include "PalNPCTalkSystem.generated.h"

class UDataTable;
class UPalTalkWidgetParameter;
class UPalTalkWindowWidgetBase;

UCLASS(Blueprintable)
class PAL_API UPalNPCTalkSystem : public UObject, public IPalNPCTalkSystemCustomFunctionInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPalTalkWidgetParameter* talkWidgetParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalTalkWindowWidgetBase* talkWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalNPCTalkData nowExecutedTalkData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 nowTalkDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName nowTalkDataSeqenceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> defaultYesNoChoiceText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CustomFuncName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* FuncParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalNPCTalkCustomFunctionResult CustomFuncResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomFuncChoseIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomFuncTalkDataIndex;
    
public:
    UPalNPCTalkSystem();

    UFUNCTION(BlueprintCallable)
    void SetCustomFunctionResult_Implementation(EPalNPCTalkCustomFunctionResult Result);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomFunctionChoseIndex_Implementation(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EPalNPCTalkProceedResult Proceed();
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UPalTalkWidgetParameter* InParameter, UPalTalkWindowWidgetBase* inTalkWidget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ChangeSeqence(FName targetSeqenceName);
    
    UFUNCTION(BlueprintCallable)
    bool CallCustomFunc();
    
    UFUNCTION(BlueprintCallable)
    void AddArgument_Implementation(const FString& Key, const FText& Text);
    

    // Fix for true pure virtual functions not being implemented
};

