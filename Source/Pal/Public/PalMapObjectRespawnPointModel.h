#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectRespawnPointModel.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectRespawnPointModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid LocationId;
    
public:
    UPalMapObjectRespawnPointModel();
};

