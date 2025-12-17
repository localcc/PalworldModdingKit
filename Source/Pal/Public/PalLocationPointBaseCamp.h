#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "PalLocationPointStatic.h"
#include "PalLocationPointBaseCamp.generated.h"

class UPalBaseCampModel;

UCLASS(Blueprintable)
class UPalLocationPointBaseCamp : public UPalLocationPointStatic {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid BaseCampId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 PvPItemCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTimerHandle PvPItemCountTimerHandle;
    
public:
    UPalLocationPointBaseCamp();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetAvailable();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTimerEvent_CountPvPItem();
    
    UFUNCTION(BlueprintCallable)
    void OnDisposeTarget(UPalBaseCampModel* Model);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameGuildWithPlayer(FGuid PlayerUId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPvPItemNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetBaseCampId() const;
    
};

