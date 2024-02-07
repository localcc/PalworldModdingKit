#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalBaseCampFunctionModuleBase.h"
#include "PalBaseCampModuleResourceCollectWorkInfo.h"
#include "PalMapObjectDisposeOptions.h"
#include "PalBaseCampModuleResourceCollector.generated.h"

class UPalFoliageInstance;
class UPalMapObjectModel;

UCLASS(Blueprintable)
class UPalBaseCampModuleResourceCollector : public UPalBaseCampFunctionModuleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FPalBaseCampModuleResourceCollectWorkInfo> MapObjectWorkInfoMap;
    
public:
    UPalBaseCampModuleResourceCollector();

private:
    UFUNCTION(BlueprintCallable)
    void OnRegisteredMapObjectModel(UPalMapObjectModel* Model);
    
    UFUNCTION(BlueprintCallable)
    void OnRegisteredFoliageModel_ServerInternal(UPalFoliageInstance* Instance);
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyedMapObjectModel(UPalMapObjectModel* Model, const FPalMapObjectDisposeOptions& Options);
    
    UFUNCTION(BlueprintCallable)
    void OnDestroyedFoliageInstance(UPalFoliageInstance* Instance);
    
};

