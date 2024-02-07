#include "PalScrollBox.h"
#include "Layout/Clipping.h"

UPalScrollBox::UPalScrollBox() {
    this->bIsVariable = false;
    this->Clipping = EWidgetClipping::ClipToBounds;
    this->Style = NULL;
    this->BarStyle = NULL;
    this->Orientation = Orient_Vertical;
    this->ScrollBarVisibility = ESlateVisibility::Visible;
    this->ConsumeMouseWheel = EConsumeMouseWheel::WhenScrollingPossible;
    this->AlwaysShowScrollbar = false;
    this->AlwaysShowScrollbarTrack = false;
    this->AllowOverscroll = true;
    this->bAnimateWheelScrolling = false;
    this->NavigationDestination = EPalDescendantScrollDestination::IntoView;
    this->NavigationScrollPadding = 0.00f;
    this->ScrollWhenFocusChanges = EPalScrollWhenFocusChanges::NoScroll;
    this->bAllowRightClickDragScrolling = true;
    this->WheelScrollMultiplier = 1.00f;
}

void UPalScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier) {
}

void UPalScrollBox::SetScrollWhenFocusChanges(EPalScrollWhenFocusChanges NewScrollWhenFocusChanges) {
}

void UPalScrollBox::SetScrollOffset(float NewScrollOffset) {
}

void UPalScrollBox::SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility) {
}

void UPalScrollBox::SetScrollbarThickness(const FVector2D& NewScrollbarThickness) {
}

void UPalScrollBox::SetScrollbarPadding(const FMargin& NewScrollbarPadding) {
}

void UPalScrollBox::SetOrientation(TEnumAsByte<EOrientation> NewOrientation) {
}

void UPalScrollBox::SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel) {
}

void UPalScrollBox::SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling) {
}

void UPalScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar) {
}

void UPalScrollBox::SetAllowOverscroll(bool NewAllowOverscroll) {
}

void UPalScrollBox::ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EPalDescendantScrollDestination ScrollDestination, float Padding) {
}

void UPalScrollBox::ScrollToStart() {
}

void UPalScrollBox::ScrollToEnd() {
}

float UPalScrollBox::GetViewOffsetFraction() const {
    return 0.0f;
}

float UPalScrollBox::GetScrollOffsetOfEnd() const {
    return 0.0f;
}

float UPalScrollBox::GetScrollOffset() const {
    return 0.0f;
}

void UPalScrollBox::EndInertialScrolling() {
}


