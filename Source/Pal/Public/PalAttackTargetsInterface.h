#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EPalAttackTargetsType.h"
#include "PalAttackTargetsInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class UPalAttackTargetsInterface : public UInterface {
    GENERATED_BODY()
};

class IPalAttackTargetsInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsHitTarget(UPARAM(Ref) TArray<EPalAttackTargetsType>& TargetTypeList);
    
};

