#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "PalWorkFacingComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalWorkFacingComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPalWorkFacingComponent(const FObjectInitializer& ObjectInitializer);

public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReverseDirection;
};

