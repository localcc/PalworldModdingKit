#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectConcreteModelBase.h"
#include "Templates/SubclassOf.h"
#include "PalMapObjectBaseCampPoint.generated.h"

class UPalUserWidgetOverlayUI;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectBaseCampPoint : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> PalBoxWiget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPalUserWidgetOverlayUI> CampTaskWiget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid BaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bForRaidBossArea;
    
public:
    UPalMapObjectBaseCampPoint();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnReceiveConfirmSurrenderRaidBossAreaResult(const bool bResult);
    
    UFUNCTION(BlueprintCallable)
    void OnReceiveConfirmExitRaidBossAreaResult(const bool bResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameGuildInLocalPlayer() const;
    
};

