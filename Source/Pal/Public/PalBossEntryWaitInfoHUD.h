#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalUserWidgetWorldHUD.h"
#include "PalBossEntryWaitInfoHUD.generated.h"

class APalBossTower;

UCLASS(Blueprintable, EditInlineNew)
class PAL_API UPalBossEntryWaitInfoHUD : public UPalUserWidgetWorldHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableCountDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APalBossTower* BossTower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime TimeLimitDate;
    
    UPalBossEntryWaitInfoHUD();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateWaitInfo(bool bIsCountDown, FDateTime TimeLimit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCountDown();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseHUD();
    
};

