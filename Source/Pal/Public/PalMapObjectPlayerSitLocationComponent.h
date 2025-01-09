#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectPlayerSitLocationComponent.generated.h"

class UPalActionBase;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalMapObjectPlayerSitLocationComponent : public UArrowComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalActionBase> SitActionClass;
    
    UPalMapObjectPlayerSitLocationComponent(const FObjectInitializer& ObjectInitializer);

};

