#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_MapObjectData.h"
#include "PalBaseCampTaskData_BuildObject.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampTaskData_BuildObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName incompleteMsgID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName completeMsgID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_MapObjectData mapObjectRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 requireNum;
    
    PAL_API FPalBaseCampTaskData_BuildObject();
};

