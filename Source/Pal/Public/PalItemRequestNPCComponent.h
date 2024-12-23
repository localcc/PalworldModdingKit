#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPalItemRequireCategory.h"
#include "PalItemRequestNPCComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalItemRequestNPCComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalItemRequireCategory RequestCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableCircum;
    
    UPalItemRequestNPCComponent(const FObjectInitializer& ObjectInitializer);

};

