#pragma once
#include "CoreMinimal.h"
#include "PalBaseCampModuleTransportItemDepotInterface.h"
#include "PalMapObjectItemStorageModel.h"
#include "PalMapObjectPasswordLockPlayerInfo.h"
#include "PalMapObjectItemChestModel.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectItemChestModel : public UPalMapObjectItemStorageModel, public IPalBaseCampModuleTransportItemDepotInterface {
    GENERATED_BODY()
public:
    UPalMapObjectItemChestModel();

private:
    UFUNCTION(BlueprintCallable)
    void OnUpdateLocalPlayerPasswordLockInfo(const FPalMapObjectPasswordLockPlayerInfo& OldLocalPlayerInfo, const FPalMapObjectPasswordLockPlayerInfo& NewLocalPlayerInfo);
    

    // Fix for true pure virtual functions not being implemented
};

