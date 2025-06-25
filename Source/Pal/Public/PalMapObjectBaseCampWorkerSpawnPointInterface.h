#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectBaseCampWorkerSpawnPointInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalMapObjectBaseCampWorkerSpawnPointInterface : public UInterface {
    GENERATED_BODY()
};

class IPalMapObjectBaseCampWorkerSpawnPointInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetSpawnPointWorldTransform(FTransform& OutTransform) const;
    
};

