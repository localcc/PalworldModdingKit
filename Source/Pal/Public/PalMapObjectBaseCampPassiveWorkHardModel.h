#pragma once
#include "CoreMinimal.h"
#include "EPalBaseCampPassiveEffectWorkHardType.h"
#include "PalMapObjectBaseCampPassiveEffectModel.h"
#include "PalMapObjectBaseCampPassiveWorkHardModel.generated.h"

class UPalBaseCampPassiveEffect_WorkHard;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectBaseCampPassiveWorkHardModel : public UPalMapObjectBaseCampPassiveEffectModel {
    GENERATED_BODY()
public:
    UPalMapObjectBaseCampPassiveWorkHardModel();
private:
    UFUNCTION(BlueprintCallable)
    void RequestUpdateWorkHardType_ServerInternal(const int32 RequestPlayerId, const int32 TypeInt);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestUpdateWorkHardType(const EPalBaseCampPassiveEffectWorkHardType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPalBaseCampPassiveEffect_WorkHard* GetPassiveEffectWorkHard() const;
    
};

