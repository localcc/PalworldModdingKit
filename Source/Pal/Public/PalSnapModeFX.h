#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PalSnapModeFX.generated.h"

UCLASS(Blueprintable)
class PAL_API APalSnapModeFX : public AActor {
    GENERATED_BODY()
public:
    APalSnapModeFX(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowSnap(FVector Location, FRotator Rotation, FVector BoxExtent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCenterSnap(FVector Location, FRotator Rotation, FVector BoxExtent, FVector SnapStart, FVector SnapEnd, bool IsAttachWall);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide();
    
};

