#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalPalDisplayCategory.h"
#include "PalDisplayPalNPCComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalDisplayPalNPCComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalPalDisplayCategory RequestCategory;
    
    UPalDisplayPalNPCComponent(const FObjectInitializer& ObjectInitializer);

};

