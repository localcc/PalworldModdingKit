#include "PalMapObjectModelPaint.h"
#include "Net/UnrealNetwork.h"

UPalMapObjectModelPaint::UPalMapObjectModelPaint() {
}

void UPalMapObjectModelPaint::OnRep_PaintData() {
}

void UPalMapObjectModelPaint::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalMapObjectModelPaint, PaintData);
}


