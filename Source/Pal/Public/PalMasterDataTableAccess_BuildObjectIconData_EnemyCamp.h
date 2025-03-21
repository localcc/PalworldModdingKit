#pragma once
#include "CoreMinimal.h"
#include "PalMasterDataTableAccess_BuildObjectIconData.h"
#include "PalMasterDataTableAccess_BuildObjectIconData_EnemyCamp.generated.h"

UCLASS(Blueprintable)
class UPalMasterDataTableAccess_BuildObjectIconData_EnemyCamp : public UPalMasterDataTableAccess_BuildObjectIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> RowNameReplaceMap;
    
    UPalMasterDataTableAccess_BuildObjectIconData_EnemyCamp();

};

