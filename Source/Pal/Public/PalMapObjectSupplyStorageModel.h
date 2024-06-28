#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectItemStorageModel.h"
#include "PalMapObjectSupplyStorageModel.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectSupplyStorageModel : public UPalMapObjectItemStorageModel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid LocationId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDateTime CreatedAtRealTime;
    
public:
    UPalMapObjectSupplyStorageModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

