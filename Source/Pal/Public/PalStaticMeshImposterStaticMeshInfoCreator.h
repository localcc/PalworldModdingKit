#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PalStaticMeshImposterStaticMeshInfo.h"
#include "PalStaticMeshImposterStaticMeshInfoCreator.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class UPalStaticMeshImposterStaticMeshInfoCreator : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPalStaticMeshImposterStaticMeshInfoCreator();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPalStaticMeshImposterStaticMeshInfo CreateStaticMeshImposterInfo(UStaticMesh* StaticMesh, const FVector& WorldLocation, const FQuat& WorldRotation);
    
};

