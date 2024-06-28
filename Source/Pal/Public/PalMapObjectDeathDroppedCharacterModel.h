#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PalMapObjectPickableCharacterModelBase.h"
#include "PalMapObjectDeathDroppedCharacterModel.generated.h"

class APalPlayerState;
class UPalMapObjectDeathDroppedCharacterModel;

UCLASS(Blueprintable)
class PAL_API UPalMapObjectDeathDroppedCharacterModel : public UPalMapObjectPickableCharacterModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReturnSelfDelegate, UPalMapObjectDeathDroppedCharacterModel*, Model);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReturnSelfDelegate OnNotifiedGuildUpdateInClientDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid OwnerPlayerUId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bCanOpenForAnyone;
    
public:
    UPalMapObjectDeathDroppedCharacterModel();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnChangedPlayerInfoInLocalPlayerGuild_ClientInternal(APalPlayerState* LocalPlayerState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameGuildInLocalPlayer() const;
    
};

