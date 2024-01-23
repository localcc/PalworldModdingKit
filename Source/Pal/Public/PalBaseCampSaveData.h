#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampModuleType.h"
#include "PalBaseCampSaveData_Module.h"
#include "PalBaseCampSaveData_WorkCollection.h"
#include "PalBaseCampSaveData_WorkerDirector.h"
#include "PalBinaryMemory.h"
#include "PalBaseCampSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampSaveData : public FPalBinaryMemory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalBaseCampSaveData_WorkerDirector WorkerDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalBaseCampSaveData_WorkCollection WorkCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EPalBaseCampModuleType, FPalBaseCampSaveData_Module> ModuleMap;
    
    PAL_API FPalBaseCampSaveData();
};

