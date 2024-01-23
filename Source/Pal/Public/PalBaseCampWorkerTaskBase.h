#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "PalBaseCampWorkerTaskBase.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalBaseCampWorkerTaskBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerBaseCampId;
    
public:
    UPalBaseCampWorkerTaskBase();
};

