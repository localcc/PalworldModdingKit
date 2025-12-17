#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "PalOnMontagePlayDelegateDelegate.h"
#include "PalPlayMontageCallbackProxy.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class PAL_API UPalPlayMontageCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOnMontagePlayDelegate OnCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOnMontagePlayDelegate OnBlendOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOnMontagePlayDelegate OnInterrupted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOnMontagePlayDelegate OnNotifyBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalOnMontagePlayDelegate OnNotifyEnd;
    
    UPalPlayMontageCallbackProxy();

protected:
    UFUNCTION()
    void OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION()
    void OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
};

