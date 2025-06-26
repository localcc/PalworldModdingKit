#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FloatingObjectComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UFloatingObjectComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UFloatingObjectComponent(const FObjectInitializer& ObjectInitializer);

};

