#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Info.h"
#include "PalGuildPlayerInfo.h"
#include "PalGuildInfo.generated.h"

class UPalGroupGuildBase;

UCLASS(Blueprintable)
class PAL_API APalGuildInfo : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGuid GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerUIds, meta=(AllowPrivateAccess=true))
    TArray<FGuid> PlayerUIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Guild, meta=(AllowPrivateAccess=true))
    UPalGroupGuildBase* Guild;
    
public:
    APalGuildInfo(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnUpdatePlayerInfo_ServerInternal(const UPalGroupGuildBase* InGuild, const FGuid& PlayerUId, const FPalGuildPlayerInfo& PlayerInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerUIds(const TArray<FGuid>& OldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Guild(const UPalGroupGuildBase* OldValue);
    
};

