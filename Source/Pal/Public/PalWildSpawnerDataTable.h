#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PalSpawnerGroupInfo.h"
#include "PalWildSpawnerDatabaseRow.h"
#include "PalWildSpawnerDataTable.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalWildSpawnerDataTable : public UObject {
    GENERATED_BODY()
public:
    UPalWildSpawnerDataTable();
    UFUNCTION(BlueprintCallable)
    TArray<FPalSpawnerGroupInfo> CreateGroupList(TArray<FPalWildSpawnerDatabaseRow> DataList);
    
};

