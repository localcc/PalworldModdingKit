#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectConcreteModelSaveData.h"
#include "PalMapObjectModelSaveData.h"
#include "PalMapObjectSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalMapObjectSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MapObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectModelSaveData Model;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalMapObjectConcreteModelSaveData ConcreteModel;
    
    PAL_API FPalMapObjectSaveData();
};

