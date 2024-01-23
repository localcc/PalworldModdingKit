#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalWorkBase.h"
#include "PalWorkRepair.generated.h"

class UPalMapObjectModel;

UCLASS(Blueprintable)
class UPalWorkRepair : public UPalWorkBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ConnectToModelInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPalMapObjectModel*> ConnectedModels;
    
public:
    UPalWorkRepair();
};

