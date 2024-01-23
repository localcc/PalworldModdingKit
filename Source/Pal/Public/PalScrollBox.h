#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateTypes.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateTypes.h"
#include "Components/SlateWrapperTypes.h"
#include "Components/PanelWidget.h"
#include "EPalDescendantScrollDestination.h"
#include "EPalScrollWhenFocusChanges.h"
#include "OnUserScrolledEventDelegate2.h"
#include "PalScrollBox.generated.h"

class USlateWidgetStyleAsset;
class UWidget;

UCLASS(Blueprintable)
class UPalScrollBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBoxStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBarStyle WidgetBarStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleAsset* BarStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility ScrollBarVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConsumeMouseWheel ConsumeMouseWheel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ScrollbarThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ScrollbarPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysShowScrollbar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysShowScrollbarTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowOverscroll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimateWheelScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalDescendantScrollDestination NavigationDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavigationScrollPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalScrollWhenFocusChanges ScrollWhenFocusChanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRightClickDragScrolling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WheelScrollMultiplier;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUserScrolledEvent OnUserScrolled;
    
    UPalScrollBox();
    UFUNCTION(BlueprintCallable)
    void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollWhenFocusChanges(EPalScrollWhenFocusChanges NewScrollWhenFocusChanges);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollOffset(float NewScrollOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollbarThickness(const FVector2D& NewScrollbarThickness);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollbarPadding(const FMargin& NewScrollbarPadding);
    
    UFUNCTION(BlueprintCallable)
    void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);
    
    UFUNCTION(BlueprintCallable)
    void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
    
    UFUNCTION(BlueprintCallable)
    void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowOverscroll(bool NewAllowOverscroll);
    
    UFUNCTION(BlueprintCallable)
    void ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EPalDescendantScrollDestination ScrollDestination, float Padding);
    
    UFUNCTION(BlueprintCallable)
    void ScrollToStart();
    
    UFUNCTION(BlueprintCallable)
    void ScrollToEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetViewOffsetFraction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScrollOffsetOfEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetScrollOffset() const;
    
    UFUNCTION(BlueprintCallable)
    void EndInertialScrolling();
    
};

