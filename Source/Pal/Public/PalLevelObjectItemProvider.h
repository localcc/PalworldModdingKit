#pragma once
#include "CoreMinimal.h"
#include "PalDataTableRowName_ItemData.h"
#include "PalLevelObjectActor.h"
#include "PalLevelObjectItemProvider.generated.h"

UCLASS(Blueprintable)
class PAL_API APalLevelObjectItemProvider : public APalLevelObjectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData ProvidableStaticItemId;
    
public:
    APalLevelObjectItemProvider(const FObjectInitializer& ObjectInitializer);

};

