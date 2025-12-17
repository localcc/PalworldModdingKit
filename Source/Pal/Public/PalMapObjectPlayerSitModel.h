#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectConcreteModelBase.h"
#include "PalMapObjectPlayerSitModel.generated.h"

UCLASS(Blueprintable)
class PAL_API UPalMapObjectPlayerSitModel : public UPalMapObjectConcreteModelBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid SittingPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPlayerSitting;
    
public:
    UPalMapObjectPlayerSitModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void RequestSitPlayer_ServerInternal(const int32 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RequestReleaseSitPlayer_ServerInternal(const int32 PlayerId);
    
public:
    UFUNCTION(BlueprintCallable)
    void RequestReleaseSitPlayer();
    
};

