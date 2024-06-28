#pragma once
#include "CoreMinimal.h"
#include "PalMapObjectRequireElementalActionModule.h"
#include "PalMapObjectRequireElementalActionModule_ForUnlockTreasureBox.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectRequireElementalActionModule_ForUnlockTreasureBox : public UPalMapObjectRequireElementalActionModule {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
public:
    UPalMapObjectRequireElementalActionModule_ForUnlockTreasureBox();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

};

