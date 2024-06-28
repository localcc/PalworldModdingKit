#pragma once
#include "CoreMinimal.h"
#include "PalBuildObjectInstallStrategyNormal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalBuildObjectInstallStrategyPlaceOnItemProvider.generated.h"

UCLASS(Abstract, Blueprintable)
class PAL_API UPalBuildObjectInstallStrategyPlaceOnItemProvider : public UPalBuildObjectInstallStrategyNormal {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData TargetStaticItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStandUpRight;
    
public:
    UPalBuildObjectInstallStrategyPlaceOnItemProvider();

};

