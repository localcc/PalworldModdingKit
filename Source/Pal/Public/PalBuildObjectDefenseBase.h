#pragma once
#include "CoreMinimal.h"
#include "PalBuildObject.h"
#include "PalDataTableRowName_ItemData.h"
#include "Templates/SubclassOf.h"
#include "PalBuildObjectDefenseBase.generated.h"

class UPalAIActionBaseCampDefenseBase;

UCLASS(Blueprintable)
class PAL_API APalBuildObjectDefenseBase : public APalBuildObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalAIActionBaseCampDefenseBase> DefenseAIActionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalDataTableRowName_ItemData BulletItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 MagazineSize;
    
public:
    APalBuildObjectDefenseBase(const FObjectInitializer& ObjectInitializer);

};

