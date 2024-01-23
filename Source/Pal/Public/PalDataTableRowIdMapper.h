#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalDataTableRowIdMapper.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UPalDataTableRowIdMapper : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> DataTables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> RowNameHashMap;
    
public:
    UPalDataTableRowIdMapper();
};

