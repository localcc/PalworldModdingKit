#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "PalNoClimbVolumeInterface.generated.h"

UINTERFACE(Blueprintable)
class UPalNoClimbVolumeInterface : public UInterface {
    GENERATED_BODY()
};

class IPalNoClimbVolumeInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDisableClimb() const;
    
};

