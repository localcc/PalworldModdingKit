#pragma once
#include "CoreMinimal.h"
#include "AkComponent.h"
#include "PalAkComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAL_API UPalAkComponent : public UAkComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PersistAcrossLevelTransition;
    
public:
    UPalAkComponent(const FObjectInitializer& ObjectInitializer);

};

