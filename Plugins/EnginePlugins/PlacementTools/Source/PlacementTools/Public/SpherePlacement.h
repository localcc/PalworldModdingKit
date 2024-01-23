#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EFadeAxis.h"
#include "PlacementToolBase.h"
#include "SpherePlacement.generated.h"

class USphereComponent;

UCLASS(Blueprintable)
class PLACEMENTTOOLS_API ASpherePlacement : public APlacementToolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFadeAxis> FadeDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> NotPlaceOnActorTags;
    
public:
    ASpherePlacement();
};

