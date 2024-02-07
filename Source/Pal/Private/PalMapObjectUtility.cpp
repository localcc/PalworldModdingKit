#include "PalMapObjectUtility.h"
#include "Templates/SubclassOf.h"

UPalMapObjectUtility::UPalMapObjectUtility() {
}

bool UPalMapObjectUtility::TryGetItemVisualModelStaticMesh(TSubclassOf<AActor> actorClass, UStaticMesh*& OutStaticMesh, FTransform& OutComponentTransform, FVector& OutCenterOfMass, UMaterialInterface*& OutMaterialInterface) {
    return false;
}

EPalMapObjectOperationResult UPalMapObjectUtility::ToMapObjectOperationResult(const int32 ResultIntValue) {
    return EPalMapObjectOperationResult::None;
}

EPalMapObjectOperationResult UPalMapObjectUtility::SelectPriorityResult(EPalMapObjectOperationResult Result1, EPalMapObjectOperationResult Result2) {
    return EPalMapObjectOperationResult::None;
}

FString UPalMapObjectUtility::MapObjectOperationResultToString(const EPalMapObjectOperationResult Result) {
    return TEXT("");
}

bool UPalMapObjectUtility::IsContainsCollisionProfiles(const UPrimitiveComponent* Component, const TArray<FName>& CollisionProfiles) {
    return false;
}


