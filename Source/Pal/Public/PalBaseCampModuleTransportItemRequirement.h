#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampModuleTransportItemTransportPriority.h"
#include "EPalBaseCampModuleTransportItemTransportableItemExtraType.h"
#include "EPalItemTypeA.h"
#include "EPalItemTypeB.h"
#include "PalStaticItemIdAndNum.h"
#include "PalBaseCampModuleTransportItemRequirement.generated.h"

USTRUCT(BlueprintType)
struct FPalBaseCampModuleTransportItemRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalBaseCampModuleTransportItemTransportPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FPalStaticItemIdAndNum> ItemInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeA> ItemTypeA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EPalItemTypeB> ItemTypeB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<EPalBaseCampModuleTransportItemTransportableItemExtraType> ItemExtraTypes;
    
    PAL_API FPalBaseCampModuleTransportItemRequirement();
};

