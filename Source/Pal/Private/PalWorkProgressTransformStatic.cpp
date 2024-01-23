#include "PalWorkProgressTransformStatic.h"
#include "Net/UnrealNetwork.h"

void UPalWorkProgressTransformStatic::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWorkProgressTransformStatic, Transform);
}

UPalWorkProgressTransformStatic::UPalWorkProgressTransformStatic() {
}

