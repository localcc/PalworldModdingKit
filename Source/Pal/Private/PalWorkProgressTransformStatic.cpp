#include "PalWorkProgressTransformStatic.h"
#include "Net/UnrealNetwork.h"

UPalWorkProgressTransformStatic::UPalWorkProgressTransformStatic() {
}

void UPalWorkProgressTransformStatic::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPalWorkProgressTransformStatic, Transform);
}


