#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalMapObjectConcreteModelModuleBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UPalMapObjectConcreteModelModuleBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bTriggeredOnSpawnedReady;
    
public:
    UPalMapObjectConcreteModelModuleBase();
};

