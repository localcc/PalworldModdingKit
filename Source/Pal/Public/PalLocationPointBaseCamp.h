#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
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
    
public:
    UPalLocationPointBaseCamp();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetAvailable();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnDisposeTarget(UPalBaseCampModel* Model);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameGuildWithPlayer(FGuid PlayerUId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetBaseCampId() const;
    
};

