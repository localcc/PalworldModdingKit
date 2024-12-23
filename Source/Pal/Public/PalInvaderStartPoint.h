#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EPalBiomeType.h"
#include "PalInvaderStartPoint.generated.h"

class UPalNavigationInvokerComponent;

UCLASS(Blueprintable)
class PAL_API APalInvaderStartPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPalNavigationInvokerComponent* NavInvokerComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPalBiomeType BiomeType;
    
public:
    APalInvaderStartPoint(const FObjectInitializer& ObjectInitializer);

};

