#include "PalTextWidgetComponent.h"

UPalTextWidgetComponent::UPalTextWidgetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


FText UPalTextWidgetComponent::GetText() const {
    return FText::GetEmpty();
}



