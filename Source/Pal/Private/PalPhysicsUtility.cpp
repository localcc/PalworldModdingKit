#include "PalPhysicsUtility.h"

UPalPhysicsUtility::UPalPhysicsUtility() {
}

void UPalPhysicsUtility::SetCanEverAffectNavigation(UActorComponent* Component, bool bAffect) {
}

bool UPalPhysicsUtility::LineTraceSingleByPalTraceType(const UObject* WorldContextObject, FVector Start, FVector End, EPalTraceTypeQuery PalTraceType, bool bTraceComplex, bool bReturnPhysicalMaterial, bool bReturnTraceIndex, FHitResult& HitResult, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FLinearColor TraceColor, FLinearColor TraceHitColor, float DrawTime) {
    return false;
}


