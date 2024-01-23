#pragma once
#include "CoreMinimal.h"
#include "NavigationSystem.h"
#include "PalNavigationSystemV1.generated.h"

UCLASS(Blueprintable, NonTransient)
class UPalNavigationSystemV1 : public UNavigationSystemV1 {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 UpdateInvokerCounter;
    
public:
    UPalNavigationSystemV1();
};

