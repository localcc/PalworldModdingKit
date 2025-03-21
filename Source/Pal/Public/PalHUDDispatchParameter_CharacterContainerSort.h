#pragma once
#include "CoreMinimal.h"
#include "EPalUIBoxSortWindowType.h"
#include "PalContainerId.h"
#include "PalHUDDispatchParameterBase.h"
#include "PalHUDDispatchParameter_CharacterContainerSort.generated.h"

UCLASS(Blueprintable)
class UPalHUDDispatchParameter_CharacterContainerSort : public UPalHUDDispatchParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPalContainerId ContainerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EPalUIBoxSortWindowType SortContainerType;
    
    UPalHUDDispatchParameter_CharacterContainerSort();

};

