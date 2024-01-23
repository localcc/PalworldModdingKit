#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateColor.h"
#include "EPalDamageTextSeq.h"
#include "PalUserWidget.h"
#include "PalUIDamageTextBase.generated.h"

class UPalUIDamageTextBase;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIDamageTextBase : public UPalUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestCloseDelegate, UPalUIDamageTextBase*, selfWidget);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestCloseDelegate OnRequestCloseDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float displayTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalDamageTextSeq nowSeq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
public:
    UPalUIDamageTextBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePosition(const FVector& targetWorldLocation);
    
    UFUNCTION(BlueprintCallable)
    void StartDisplay(float inDisplayTime);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetWorldLocation(const FVector& NewLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDamageValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDamageColor(const FSlateColor& inColor);
    
    UFUNCTION(BlueprintCallable)
    void ResetTimer();
    
    UFUNCTION(BlueprintCallable)
    void RequestClose();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRequestClose();
    
};

