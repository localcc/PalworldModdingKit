#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "PalNetworkPlayerObtainClientParameter.h"
#include "PalNetworkPlayerStateComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPalNetworkPlayerStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalNetworkPlayerObtainClientParameter> ObtainClientParamMap;
    
public:
    UPalNetworkPlayerStateComponent(const FObjectInitializer& ObjectInitializer);

};

