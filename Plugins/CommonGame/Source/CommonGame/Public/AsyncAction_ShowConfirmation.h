#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "CommonMessagingResultMCDelegateDelegate.h"
#include "AsyncAction_ShowConfirmation.generated.h"

class UAsyncAction_ShowConfirmation;
class UCommonGameDialogDescriptor;
class ULocalPlayer;
class UObject;

UCLASS(Blueprintable)
class UAsyncAction_ShowConfirmation : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonMessagingResultMCDelegate OnResult;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULocalPlayer* TargetLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonGameDialogDescriptor* Descriptor;
    
public:
    UAsyncAction_ShowConfirmation();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsyncAction_ShowConfirmation* ShowConfirmationYesNo(UObject* InWorldContextObject, FText Title, FText Message);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsyncAction_ShowConfirmation* ShowConfirmationOkCancel(UObject* InWorldContextObject, FText Title, FText Message);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(WorldContext="InWorldContextObject"))
    static UAsyncAction_ShowConfirmation* ShowConfirmationCustom(UObject* InWorldContextObject, UCommonGameDialogDescriptor* NewDescriptor);
    
};

