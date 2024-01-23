#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalUserWidget.h"
#include "PalUIRadialMenuWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalUIRadialMenuWidgetBase : public UPalUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeSelectedIndexDelegate, int32, newIndex, int32, prevIndex);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChangeSelectedIndexDelegate OnChangeSelectedIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IgnoreMouseLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 menuNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 shiftDegree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float detectPadAxisBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float nowArrowRadian;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 nowSelectedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> menuAreaStartRadian;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> menuAreaEndRadian;
    
public:
    UPalUIRadialMenuWidgetBase();
    UFUNCTION(BlueprintCallable)
    void UpdateSelectedIndex_ForPad();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSelectedIndex_ForMouse(const FVector2D& MousePosition, const FVector2D& CenterPosition);
    
    UFUNCTION(BlueprintCallable)
    void UpdateSelectedIndex_ForceAxis(const FVector2D& Axis);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedIndexForce(int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    float RecalculateRadian(float inRadian);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearSelectedIndex();
    
    UFUNCTION(BlueprintCallable)
    void CalculateRadialMenuArea(float parentDegreeAngle);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BuildRadialMenuWidget();
    
};

